#include <QCoreApplication>
#include "date.h"

Date::Date() {
      day = 0;
      month = 0;
      year = 0;
}
Date::Date(int d, int m, int y)
{ day = d;
    month = m;
    year =y;
}
     void Date::print()
    {
    std::cout<<day<<"."<<month<<"."<<year << std::endl;
}
