#include "MainWindow.h"
#include <QVBoxLayout>
#include <QAction>
#include <QFontDialog>
#include <QCoreApplication>
#include <QShortcut>
#include <QContextMenuEvent>
#include <QMenu>
#include <qtermwidget.h>
#include "SSHDialog.h"
#include "ColorSchemeDialog.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent)
{
    setWindowTitle("Terminal Emulator");
    setGeometry(100, 100, 800, 600);

    tabWidget = new QTabWidget;
    setCentralWidget(tabWidget);

    QTermWidget::addCustomColorSchemeDir(QCoreApplication::applicationDirPath() + "/color-schemes");

    menuBar = new QMenuBar(this);
    setMenuBar(menuBar);

    fileMenu = menuBar->addMenu("&File");

    QAction *newTabAction = new QAction("&New Tab", this);
    connect(newTabAction, &QAction::triggered, this, &MainWindow::newTab);
    fileMenu->addAction(newTabAction);

    QAction *connectSSHAction = new QAction("&Connect SSH", this);
    connect(connectSSHAction, &QAction::triggered, this, &MainWindow::connectSSH);
    fileMenu->addAction(connectSSHAction);

    QMenu *settingsMenu = menuBar->addMenu("&Settings");

    QAction *colorSchemeAction = new QAction("&Color Scheme", this);
    connect(colorSchemeAction, &QAction::triggered, this, &MainWindow::changeColorScheme);
    settingsMenu->addAction(colorSchemeAction);

    QAction *fontAction = new QAction("&Font", this);
    connect(fontAction, &QAction::triggered, this, &MainWindow::changeFont);
    settingsMenu->addAction(fontAction);

    // Shortcuts
    QShortcut *copyShortcut = new QShortcut(QKeySequence::Copy, this);
    connect(copyShortcut, &QShortcut::activated, this, &MainWindow::copy);

    QShortcut *pasteShortcut = new QShortcut(QKeySequence::Paste, this);
    connect(pasteShortcut, &QShortcut::activated, this, &MainWindow::paste);



    QShortcut *clearShortcut = new QShortcut(QKeySequence("Ctrl+L"), this);
    connect(clearShortcut, &QShortcut::activated, this, &MainWindow::clear);

    QShortcut *zoomInShortcut = new QShortcut(QKeySequence::ZoomIn, this);
    connect(zoomInShortcut, &QShortcut::activated, this, &MainWindow::zoomIn);

    QShortcut *zoomOutShortcut = new QShortcut(QKeySequence::ZoomOut, this);
    connect(zoomOutShortcut, &QShortcut::activated, this, &MainWindow::zoomOut);

    createTerminalTab();
}

MainWindow::~MainWindow()
{
}

void MainWindow::newTab()
{
    createTerminalTab();
}

void MainWindow::connectSSH()
{
    SSHDialog dialog(this);
    if (dialog.exec() == QDialog::Accepted) {
        QString host = dialog.getHost();
        QString username = dialog.getUsername();
        int port = dialog.getPort();

        if (!host.isEmpty() && !username.isEmpty()) {
            QStringList args;
            args << "-p" << QString::number(port) << QString("%1@%2").arg(username, host);
            createTerminalTab("ssh", args);
        }
    }
}

void MainWindow::changeColorScheme()
{
    // Get available color schemes from QTermWidget
    QStringList schemes = QTermWidget::availableColorSchemes();

    ColorSchemeDialog dialog(schemes, this);
    if (dialog.exec() == QDialog::Accepted) {
        QString scheme = dialog.getSelectedScheme();
        // Apply to all tabs
        for (int i = 0; i < tabWidget->count(); ++i) {
            QWidget *tab = tabWidget->widget(i);
            QTermWidget *term = tab->findChild<QTermWidget*>();
            if (term) {
                term->setColorScheme(scheme);
            }
        }
    }
}

void MainWindow::changeFont()
{
    bool ok;
    QFont font = QFontDialog::getFont(&ok, this);
    if (ok) {
        // Apply to all tabs
        for (int i = 0; i < tabWidget->count(); ++i) {
            QWidget *tab = tabWidget->widget(i);
            QTermWidget *term = tab->findChild<QTermWidget*>();
            if (term) {
                term->setTerminalFont(font);
            }
        }
    }
}

void MainWindow::copy()
{
    int currentIndex = tabWidget->currentIndex();
    if (currentIndex >= 0) {
        QWidget *tab = tabWidget->widget(currentIndex);
        QTermWidget *term = tab->findChild<QTermWidget*>();
        if (term) {
            term->copyClipboard();
        }
    }
}

void MainWindow::paste()
{
    int currentIndex = tabWidget->currentIndex();
    if (currentIndex >= 0) {
        QWidget *tab = tabWidget->widget(currentIndex);
        QTermWidget *term = tab->findChild<QTermWidget*>();
        if (term) {
            term->pasteClipboard();
        }
    }
}



void MainWindow::clear()
{
    int currentIndex = tabWidget->currentIndex();
    if (currentIndex >= 0) {
        QWidget *tab = tabWidget->widget(currentIndex);
        QTermWidget *term = tab->findChild<QTermWidget*>();
        if (term) {
            term->clear();
        }
    }
}

void MainWindow::zoomIn()
{
    int currentIndex = tabWidget->currentIndex();
    if (currentIndex >= 0) {
        QWidget *tab = tabWidget->widget(currentIndex);
        QTermWidget *term = tab->findChild<QTermWidget*>();
        if (term) {
            term->zoomIn();
        }
    }
}

void MainWindow::zoomOut()
{
    int currentIndex = tabWidget->currentIndex();
    if (currentIndex >= 0) {
        QWidget *tab = tabWidget->widget(currentIndex);
        QTermWidget *term = tab->findChild<QTermWidget*>();
        if (term) {
            term->zoomOut();
        }
    }
}

bool MainWindow::eventFilter(QObject *obj, QEvent *event)
{
    if (event->type() == QEvent::ContextMenu) {
        QContextMenuEvent *contextEvent = static_cast<QContextMenuEvent*>(event);
        QTermWidget *term = qobject_cast<QTermWidget*>(obj);
        if (term) {
            // Create context menu
            QMenu menu(this);
            QAction *copyAction = menu.addAction("Copy");
            copyAction->setShortcut(QKeySequence::Copy);
            connect(copyAction, &QAction::triggered, this, &MainWindow::copy);

            QAction *pasteAction = menu.addAction("Paste");
            pasteAction->setShortcut(QKeySequence::Paste);
            connect(pasteAction, &QAction::triggered, this, &MainWindow::paste);

            menu.addSeparator();

            QAction *clearAction = menu.addAction("Clear");
            clearAction->setShortcut(QKeySequence("Ctrl+L"));
            connect(clearAction, &QAction::triggered, this, &MainWindow::clear);

            menu.addSeparator();

            QAction *zoomInAction = menu.addAction("Zoom In");
            zoomInAction->setShortcut(QKeySequence::ZoomIn);
            connect(zoomInAction, &QAction::triggered, this, &MainWindow::zoomIn);

            QAction *zoomOutAction = menu.addAction("Zoom Out");
            zoomOutAction->setShortcut(QKeySequence::ZoomOut);
            connect(zoomOutAction, &QAction::triggered, this, &MainWindow::zoomOut);

            // Show menu at cursor position
            menu.exec(contextEvent->globalPos());
            return true; // Event handled
        }
    }
    return QMainWindow::eventFilter(obj, event);
}

void MainWindow::createTerminalTab(const QString &program, const QStringList &args)
{
    QWidget *tab = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(tab);

    QTermWidget *term = new QTermWidget(0, tab);
    layout->addWidget(term);

    // Install event filter for context menu
    term->installEventFilter(this);

    if (!program.isEmpty()) {
        term->setShellProgram(program);
        if (!args.isEmpty()) {
            term->setArgs(args);
        }
    }

    term->startShellProgram();

    QString tabTitle = program.isEmpty() ? "Terminal" : program;
    tabWidget->addTab(tab, tabTitle);
}