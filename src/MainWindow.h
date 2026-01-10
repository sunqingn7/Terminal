#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTabWidget>
#include <QMenuBar>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void newTab();
    void connectSSH();
    void changeColorScheme();
    void changeFont();
    void copy();
    void paste();
    void clear();
    void zoomIn();
    void zoomOut();

protected:
    bool eventFilter(QObject *obj, QEvent *event) override;

private:
    void createTerminalTab(const QString &program = "", const QStringList &args = QStringList());

    QTabWidget *tabWidget;
    QMenuBar *menuBar;
    QMenu *fileMenu;
};

#endif // MAINWINDOW_H