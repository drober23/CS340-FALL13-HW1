/**
* @file
* @author Luc Renambot
* @version 1.0
* @section LICENSE
*  blah blah
* @section DESCRIPTION
*  blah blah blah
*
*Diana Roberts
*drober23@uic.edu
*665747239
*CS 340 Fall 2013
*HOMEWORK 1
*
*/

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
    class MainWindow;
}

/*! \brief Main class
 *         of my application for project CS340.
 *
 *  Inherits for QMainWindow from Qt
 */
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
     /**
      * Constructor for MainWindow
      *
      * @param parent a parent widget, can be null
      */
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked(); /**< slot for button 2>*/
    void on_pushButton_3_clicked(); /**< slot for button 3>*/
    void on_pushButton_4_clicked(); /**< slot for button 4>*/

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
