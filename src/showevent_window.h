#pragma once
#include "ui_showevent_window.h"
#include <QMainWindow>

class showevent_window : public QMainWindow
{
    Q_OBJECT

public:
    showevent_window(QWidget *parent = nullptr);
    ~showevent_window();

    Ui_showevent_window *ui;
};