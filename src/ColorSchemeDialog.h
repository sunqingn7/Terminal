#ifndef COLORSCHEMEDIALOG_H
#define COLORSCHEMEDIALOG_H

#include <QDialog>
#include <QComboBox>
#include <QVBoxLayout>
#include <QDialogButtonBox>

class ColorSchemeDialog : public QDialog
{
    Q_OBJECT

public:
    ColorSchemeDialog(const QStringList &schemes, QWidget *parent = nullptr);
    QString getSelectedScheme() const;

private:
    QComboBox *schemeComboBox;
};

#endif // COLORSCHEMEDIALOG_H