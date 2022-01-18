#include <QCoreApplication>
#include "date.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Date x;
    x.print();
    Date y(18,1,2022);
      x.print();
    return a.exec();
}
