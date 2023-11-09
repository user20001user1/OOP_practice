#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->formWidget->hide();
    ui->label_2->hide();
    ui->pbConfirm->hide();
    QFont font;
    font.setFamily("Bahnschrift Light SemiCondensed");
    font.setPointSize(22);
    label_3 = new QLabel;
    label_3->setFont(font);
    label_3->setAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
    ui->verticalLayout_3->addWidget(label_3);

}

void MainWindow::on_pbCreate_clicked()
{
    ui->lnId->setText("");
    ui->lnAppNum->setText("");
    ui->lnArea->setText("");
    ui->lnFloor->setText("");
    ui->lnRooms->setText("");
    ui->lnStreet->setText("");

    label_3->hide();
    ui->formWidget_2->hide();
    ui->formWidget->show();
    ui->label_2->show();
    ui->pbConfirm->show();

    id = ui->lnId->text();
    number = ui->lnAppNum->text();
    area = ui->lnArea->text();
    floor = ui->lnFloor->text();
    rooms = ui->lnRooms->text();
    street = ui->lnStreet->text();
    if(ui->rbSideYes->isChecked()) sunnySide = true;
    else if (ui->rbSideNo->isChecked())sunnySide = false;

    if(ui->rbCornerNo->isChecked()) corner = true;
    else if (ui->rbCornerYes->isChecked())corner = false;
}

void MainWindow::on_pbConfirm_clicked()
{
    if(ui->lnId->text().isEmpty() || ui->lnAppNum->text().isEmpty() || ui->lnArea->text().isEmpty() || ui->lnFloor->text().isEmpty() || ui->lnRooms->text().isEmpty() || ui->lnStreet->text().isEmpty()){
        QMessageBox::warning(this, "Error", "Empty fields");
    }
    else {
        app = new Apartment(id.toInt(), number.toInt(), area.toDouble(), floor.toInt(), rooms.toInt(), street.toStdString(), sunnySide, corner);
        QMessageBox::information(this, "Success", "Object created successful", QMessageBox::Ok);
    }
}

void MainWindow::on_pbShow_clicked()
{
    if(ui->lnId->text().isEmpty() || ui->lnAppNum->text().isEmpty() || ui->lnArea->text().isEmpty() || ui->lnFloor->text().isEmpty() || ui->lnRooms->text().isEmpty() || ui->lnStreet->text().isEmpty() /*!(ui->rbSideNo->isChecked() && ui->rbSideYes->isChecked()) || !(ui->rbCornerNo->isChecked() && ui->rbCornerYes->isChecked())*/){
        QMessageBox::warning(this, "Error", "Empty fields");
    }
    else{
        for (auto label : ui->formWidget_2->findChildren<QLabel *>()) {
            label->hide();
        }
        QFont font;
        font.setFamily("Segoe UI");
        font.setPointSize(14);
        ui->pbConfirm->hide();
        ui->formWidget->hide();
        ui->label_2->hide();

        ui->formWidget_2->resize(371, 391);
        ui->formWidget_2->move(410, 90);
        ui->formWidget_2->show();
        label_3->show();

        label_3->setText("Print data:");

        QLabel *showId = new QLabel;
        showId->setText("ID: " + ui->lnId->text());
        showId->setParent(ui->formWidget_2);
        showId->setGeometry(1, 1, 300, 24);
        showId->setVisible(true);
        showId->setFont(font);

        QLabel *showAppNum = new QLabel;
        showAppNum->setText("App number: " + ui->lnAppNum->text());
        showAppNum->setParent(ui->formWidget_2);
        showAppNum->setGeometry(1, 41, 300, 24);
        showAppNum->setVisible(true);
        showAppNum->setFont(font);

        QLabel *showArea = new QLabel;
        showArea->setText("Area: " + ui->lnArea->text());
        showArea->setParent(ui->formWidget_2);
        showArea->setGeometry(1, 81, 300, 24);
        showArea->setVisible(true);
        showArea->setFont(font);

        QLabel *showFloor = new QLabel;
        showFloor->setText("Floor: " + ui->lnFloor->text());
        showFloor->setParent(ui->formWidget_2);
        showFloor->setGeometry(1, 121, 300, 24);
        showFloor->setVisible(true);
        showFloor->setFont(font);

        QLabel *showRooms = new QLabel;
        showRooms->setText("Rooms: " +ui->lnRooms->text());
        showRooms->setParent(ui->formWidget_2);
        showRooms->setGeometry(1, 161, 300, 24);
        showRooms->setVisible(true);
        showRooms->setFont(font);

        QLabel *showStreet = new QLabel;
        showStreet->setText("Street: " + ui->lnStreet->text());
        showStreet->setParent(ui->formWidget_2);
        showStreet->setGeometry(1, 201, 300, 24);
        showStreet->setVisible(true);
        showStreet->setFont(font);

        QLabel *showSide = new QLabel;
        QString side;
        if(ui->rbSideYes->isChecked()) side = "yes";
        else if(ui->rbSideNo->isChecked()) side = "no";
        showSide->setText("Has sunny side?: " + side);
        showSide->setParent(ui->formWidget_2);
        showSide->setGeometry(1, 241, 300, 24);
        showSide->setVisible(true);
        showSide->setFont(font);

        QLabel *showCorner = new QLabel;
        QString corner;
        if(ui->rbCornerYes->isChecked()) corner = "yes";
        else if(ui->rbCornerNo->isChecked()) corner = "no";
        showCorner->setText("Is corner app?: " + corner);
        showCorner->setParent(ui->formWidget_2);
        showCorner->setGeometry(1, 281, 300, 24);
        showCorner->setVisible(true);
        showCorner->setFont(font);
    }
}


void MainWindow::on_pbExit_clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Exit", "Exit the program", QMessageBox::Yes | QMessageBox::No);

    if (reply == QMessageBox::Yes) {
        QCoreApplication::exit(0);
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actioncreate_triggered()
{
    MainWindow::on_pbCreate_clicked();
    MainWindow::on_pbConfirm_clicked();

}


void MainWindow::on_actionshow_triggered()
{
     MainWindow::on_pbShow_clicked();
}


void MainWindow::on_actionexit_triggered()
{
    MainWindow::on_pbExit_clicked();
}

