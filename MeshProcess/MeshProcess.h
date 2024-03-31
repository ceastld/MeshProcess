#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_MeshProcess.h"

class MeshProcess : public QMainWindow
{
    Q_OBJECT

public:
    MeshProcess(QWidget *parent = nullptr);
    ~MeshProcess();

private:
    Ui::MeshProcessClass ui;
};
