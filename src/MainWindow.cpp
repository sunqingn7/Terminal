#include "MainWindow.h"
#include <QVBoxLayout>
#include <QAction>
#include <qtermwidget.h>
#include "SSHDialog.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent)
{
    setWindowTitle("Terminal Emulator");
    setGeometry(100, 100, 800, 600);

    tabWidget = new QTabWidget;
    setCentralWidget(tabWidget);

    menuBar = new QMenuBar(this);
    setMenuBar(menuBar);

    fileMenu = menuBar->addMenu("&File");

    QAction *newTabAction = new QAction("&New Tab", this);
    connect(newTabAction, &QAction::triggered, this, &MainWindow::newTab);
    fileMenu->addAction(newTabAction);

    QAction *connectSSHAction = new QAction("&Connect SSH", this);
    connect(connectSSHAction, &QAction::triggered, this, &MainWindow::connectSSH);
    fileMenu->addAction(connectSSHAction);

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