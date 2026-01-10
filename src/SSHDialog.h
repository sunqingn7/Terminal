#ifndef SSHDIALOG_H
#define SSHDIALOG_H

#include <QDialog>
#include <QLineEdit>
#include <QSpinBox>
#include <QFormLayout>
#include <QDialogButtonBox>

class SSHDialog : public QDialog
{
    Q_OBJECT

public:
    SSHDialog(QWidget *parent = nullptr);
    QString getHost() const;
    QString getUsername() const;
    int getPort() const;

private:
    QLineEdit *hostEdit;
    QLineEdit *usernameEdit;
    QSpinBox *portSpinBox;
};

#endif // SSHDIALOG_H