#include <QtGui/QApplication>
#include "DeployDll.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    DeployDll w;
    return a.exec();
}

