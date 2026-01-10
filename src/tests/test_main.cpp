#include <QtTest/QtTest>
#include <QApplication>
#include <qtermwidget.h>

// Test class
class TestTerminalEmulator : public QObject
{
    Q_OBJECT

private slots:
    void testColorSchemes()
    {
        QTermWidget::addCustomColorSchemeDir("./color-schemes");
        QStringList schemes = QTermWidget::availableColorSchemes();
        QVERIFY(schemes.contains("Black on White"));
        QVERIFY(schemes.contains("White on Black"));
    }

    void testQTermWidgetCreation()
    {
        QTermWidget::addCustomColorSchemeDir("./color-schemes");
        QTermWidget *term = new QTermWidget();
        QVERIFY(term != nullptr);
        QVERIFY(term->availableColorSchemes().size() > 0);
        delete term;
    }
};

QTEST_MAIN(TestTerminalEmulator)
#include "test_main.moc"