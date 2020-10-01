#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QDebug>
#include <QLabel>
#include <QSlider>
#include <QComboBox>
#include <QLineEdit>
#include <QMainWindow>
#include <QPushButton>
#include <QFileDialog>
#include <QCommonStyle>
#include <QDesktopWidget>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots :
    void initWindow();
    void initButtons();
    void initSliders();
    void initComboBox();
    void initArrowButtons();

    void sceneChoice();
    void sliderValue();
    void displayImage();

    void shading();
    void sphereMarching();
    void downloadImage();


private:
    Ui::MainWindow * ui;
    QSlider * speedSlider;
    QLabel * displayLabel, * sliderLabel, * downloadLabel;
    QComboBox * sceneCombo;
    QLineEdit * downloadFileName;
    QPushButton * sphereMarchingButton, * shadingButton, * downloadButton;
    QPushButton * arrowLeft, * arrowRight, * arrowUp, * arrowDown;

    int windowHeight, windowWIdth;
    int desktopHeight, desktopWidth;


};
#endif // MAINWINDOW_H