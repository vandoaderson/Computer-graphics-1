#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow{

    Q_OBJECT

public:

    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_checkBox_clicked(bool checked);

    void on_radius_valueChanged(int arg1);

    void on_action_Exit_triggered(bool checked);

private:

    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
