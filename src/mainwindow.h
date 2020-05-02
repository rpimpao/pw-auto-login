#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "charmodel.h"
#include "chardata.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    void setupConnections();
    Ui::MainWindow *ui;
    CharModel* m_model;
    CharData m_newCharData;

private slots:
    void openFileDialog();
    void updateCharAccount();
    void updateCharPassword();
    void updateCharName();
    void addChar();
    void clearForm();
    void deleteChar();
};
#endif // MAINWINDOW_H
