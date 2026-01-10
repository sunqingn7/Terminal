#include "MainWindow.h"
#include <QVBoxLayout>
#include <QAction>
#include <QFontDialog>
#include <QCoreApplication>
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

void MainWindow::createTerminalTab(const QString &program, const QStringList &args)
{
    QWidget *tab = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(tab);

    QTermWidget *term = new QTermWidget(0, tab);
    layout->addWidget(term);

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