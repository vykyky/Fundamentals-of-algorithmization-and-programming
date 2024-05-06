#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QVector>
#include <QPair>
#include <QPainter>
#include <QToolBar>
#include <QSpinBox>
#include <QPushButton>
#include <QLabel>
#include <QLineEdit>
#include <QComboBox>
#include <QTimer>
#include <QRandomGenerator>
#include <QMessageBox>
#include <QTime>
#include <QElapsedTimer>

#include "mergesort.h"
#include "quicksort.h"
#include "heapsort.h"


QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QVector <QPair <int, int>> motionVector;
    QVector <QPair <int, int>> searchVector;

    QToolBar* toolBar = new QToolBar;
    QPushButton* sortButton = new QPushButton;
    QPushButton* searchButton = new QPushButton;
    QLabel* quantityTextEdit = new QLabel;
    QLabel* timeLabel = new QLabel;
    QLabel* findLabel = new QLabel;
    QLabel* ansFindLabel = new QLabel;

    QSpinBox* sizeSpinBox = new QSpinBox;
    QSpinBox* findSpinBox = new QSpinBox;

    QComboBox* sortComboBox = new QComboBox;
    QTimer* timer;
    QVector <QRectF*> RectsVector;

    int size = 0 ;
    int ind1 = -1, ind2 = -1, MID1 = -1, MID2= -1;
    int* arr = new int[0];
    bool* mainUpdating;
    bool* serchUpd;

    void randomNumberGenerate();
    void showSort();
    void showSearch();

    void paintEvent(QPaintEvent *event);
    void createNewArr();
    bool isSort();
    int binsearch (int digit);

private slots:
    void on_sortButton_clicked();
    void on_searchButton_clicked();


private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
