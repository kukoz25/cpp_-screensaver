#include "drugieokno.h"
#include "ui_drugieokno.h"
#include <QFileDialog>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include "mainwindow.h"


drugieokno::drugieokno(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::drugieokno)
{
    ui->setupUi(this);
}

drugieokno::~drugieokno()
{
    delete ui;
}

void drugieokno::on_pushButton_clicked()
{
   QString p = QFileDialog::getExistingDirectory(this,"path", "C://", QFileDialog::ShowDirsOnly|QFileDialog::DontResolveSymlinks);
   ui->sciezka->setText(p);
   QDir path(p);
   QStringList files = path.entryList(QDir::Dirs|QDir::NoDotAndDotDot);
   ui->motyw->addItems(files);

}


void drugieokno::on_pushButton_2_clicked()
{
//QMessageBox::about(this,"cycki","chuj");
    QString filename = "D:\\studia\\6 semestr\\pjc\\u\\config.txt";
     QFile file(filename);
   if(file.open(QIODevice::WriteOnly | QIODevice::Text))
    {

         QTextStream stream(&file);
         stream << ui->zrodlo->currentText() << Qt::endl;
         stream << ui->sciezka->text().replace("/","\\") << Qt::endl;
         stream << ui->motyw->currentText() << Qt::endl;
         stream << ui->data1->currentText() <<  "." << ui->data2->currentText()<< "." << ui->data3->currentText()<< Qt::endl;
         stream << ui->czas1->currentText() <<  ":" << ui->czas2->currentText()<< Qt::endl;
         stream << ui->bezczynnosc->currentText()<< Qt::endl;
         stream << ui->czaszmiany->currentText()<< Qt::endl;
     }
file.close();
hide();

MainWindow *newmain= new MainWindow();
newmain->show();

}

