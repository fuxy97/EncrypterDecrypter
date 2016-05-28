#ifndef ENCRYPTER_H
#define ENCRYPTER_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_ED_file_clicked();
    void on_ED_Message_clicked();
    void on_settings_button_clicked();
    void on_about_button_clicked();

    void on_pushButton_clicked();

    void on_SaveDir_button_clicked();

    void on_Icon_button_clicked();

    void on_history_button_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // ENCRYPTER_H
