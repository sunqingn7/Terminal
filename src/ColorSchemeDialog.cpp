#include "ColorSchemeDialog.h"

ColorSchemeDialog::ColorSchemeDialog(const QStringList &schemes, QWidget *parent) : QDialog(parent)
{
    setWindowTitle("Select Color Scheme");

    QVBoxLayout *layout = new QVBoxLayout(this);

    schemeComboBox = new QComboBox(this);
    schemeComboBox->addItems(schemes);
    layout->addWidget(schemeComboBox);

    QDialogButtonBox *buttonBox = new QDialogButtonBox(QDialogButtonBox::Ok | QDialogButtonBox::Cancel, this);
    connect(buttonBox, &QDialogButtonBox::accepted, this, &QDialog::accept);
    connect(buttonBox, &QDialogButtonBox::rejected, this, &QDialog::reject);
    layout->addWidget(buttonBox);
}

QString ColorSchemeDialog::getSelectedScheme() const
{
    return schemeComboBox->currentText();
}