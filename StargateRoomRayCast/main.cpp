#include "stargateroom.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    StargateRoom w;
    w.show();
    return a.exec();
}
