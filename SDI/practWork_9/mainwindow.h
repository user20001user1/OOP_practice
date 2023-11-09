#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>
#include <QLabel>
#include "Apartment.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:
    void on_pbCreate_clicked();

    void on_pbShow_clicked();

    void on_pbExit_clicked();

    void on_pbConfirm_clicked();

    void on_actioncreate_triggered();

    void on_actionshow_triggered();

    void on_actionexit_triggered();

private:
    Ui::MainWindow *ui;
    Apartment* app;
    QLabel *label_3;
    QString id, number, area, floor, rooms, street;
    bool sunnySide, corner;
};
#endif // MAINWINDOW_H
