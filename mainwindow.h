#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include "drugieokno.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE
///podstawowe okno programu
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    ///skacze do konfiguracji
    void on_pushButton_clicked();
    ///odpala test
    void on_pushButton_2_clicked();

private:
    Ui::MainWindow *ui;
    drugieokno *drugieokno;

};
#endif // MAINWINDOW_H
