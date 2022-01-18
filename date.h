#ifndef DATE_H
#define DATE_H
#include <iostream>

class Date
{
    int day;
    int month;
    int year;
public:
    Date();
    Date(int,int,int);
    void print();
};

#endif // DATE_H
