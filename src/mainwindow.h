#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QCloseEvent>
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
    void readSettings();
    void writeSettings();
    void closeEvent(QCloseEvent *event);
    bool isElementClientPathSet();
    void launchClient(const CharData& charData);
    Ui::MainWindow *ui;
    CharModel* m_model;
    CharData m_newCharData;
    QVector<int> m_pidList;

private slots:
    void openFileDialog();
    void updateCharAccount();
    void updateCharPassword();
    void updateCharName();
    void addChar();
    void clearForm();
    void logSelectedChar();
    void deleteChar();
    void logAllChars();
    void reportBug();
    void showAbout();
};
#endif // MAINWINDOW_H
