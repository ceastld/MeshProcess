#include "MeshProcess.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MeshProcess w;
    w.show();
    return a.exec();
}
