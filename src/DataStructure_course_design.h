#pragma once
#include "ui_DataStructure_course_design.h"
#include "debug_label.h"
#include <QMainWindow>
#include "navigation_window.h"
#include "alarm_window.h"
#include "login_window.h"
#include "showevent_window.h"
#include <QImage>
#include <QFile>
#include <QMessageBox>
#include <QPushButton>
#include <QString>
#include <QTextStream>
#include <QTextCodec>
#include <string>
#include <vector>
#include <map>
typedef struct course_information
{
    QString name;
    std::vector<int> course_weeks;
    std::vector<std::pair<int, std::vector<int>>> course_time;
    QString course_site_building;
    QString course_site_room;

    int exam_week;
    std::pair<int, std::vector<int>> exam_time;
    QString exam_site_building;
    QString exam_site_room;
} course_information;

class DataStructure_course_design : public QMainWindow
{
    Q_OBJECT

public:
    debug_label *my_debugger;
    navigation_window *my_navigation;
    alarm_window *my_alarm;
    login_window *my_login;
    showevent_window *my_showevent;
    DataStructure_course_design(QWidget *parent = nullptr);
    ~DataStructure_course_design();
    std::map<QString, course_information *> courses;

private slots:

    void slot_click_cell(QTableWidgetItem *);

private:
    Ui_DataStructure_course_design *ui;
};