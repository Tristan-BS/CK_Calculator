#include "CK_Calculator.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CK_Calculator w;
    w.show();
    return a.exec();
}
