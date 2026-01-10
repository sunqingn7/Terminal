#include "SSHDialog.h"

SSHDialog::SSHDialog(QWidget *parent) : QDialog(parent)
{
    setWindowTitle("SSH Connection");

    QFormLayout *formLayout = new QFormLayout(this);

    hostEdit = new QLineEdit(this);
    usernameEdit = new QLineEdit(this);
    portSpinBox = new QSpinBox(this);
    portSpinBox->setRange(1, 65535);
    portSpinBox->setValue(22);

    formLayout->addRow("Host:", hostEdit);
    formLayout->addRow("Username:", usernameEdit);
    formLayout->addRow("Port:", portSpinBox);

    QDialogButtonBox *buttonBox = new QDialogButtonBox(QDialogButtonBox::Ok | QDialogButtonBox::Cancel, this);
    connect(buttonBox, &QDialogButtonBox::accepted, this, &QDialog::accept);
    connect(buttonBox, &QDialogButtonBox::rejected, this, &QDialog::reject);

    formLayout->addWidget(buttonBox);
}

QString SSHDialog::getHost() const
{
    return hostEdit->text();
}

QString SSHDialog::getUsername() const
{
    return usernameEdit->text();
}

int SSHDialog::getPort() const
{
    return portSpinBox->value();
}