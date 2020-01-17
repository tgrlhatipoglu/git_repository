#ifndef INFODIALOG_H
#define INFODIALOG_H

#include <QDialog>

namespace Ui {
class InfoDialog;
}

class InfoDialog : public QDialog
{
    Q_OBJECT

public:
    explicit InfoDialog(QWidget *parent = 0);
    ~InfoDialog();

    QString getFavoriteOs() const;
    void setFavoriteOs(const QString &value);

    QString getPosition() const;
    void setPosition(const QString &value);

private slots:
    void on_okButton_clicked();

    void on_cancelButton_clicked();

private:
    QString position;
    QString favoriteOs;
    Ui::InfoDialog *ui;
};

#endif // INFODIALOG_H
