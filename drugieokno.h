#ifndef DRUGIEOKNO_H
#define DRUGIEOKNO_H

#include <QDialog>


namespace Ui {
class drugieokno;
}
///okno konfiguracji
class drugieokno : public QDialog
{
    Q_OBJECT

public:
    explicit drugieokno(QWidget *parent = nullptr);
    ~drugieokno();

private slots:
    ///pozwala na grzebanie w plikach
    void on_pushButton_clicked();
    ///wraca do pierszego okna
    void on_pushButton_2_clicked();

private:
    Ui::drugieokno *ui;
};

#endif // DRUGIEOKNO_H
