#include <QCoreApplication>
struct Date{
	int day;
	int month;
	int year;

};
void print (Date d){
    std::count<<d.day<<"."<<d.month<<"."<<d.year << std::enl;
}
void tommorow (Date d){
    std::count<<d.day<<"."<<d.month<<"."<<d.year << std::enl;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

	 Date x;
	x.day = 14;
	x.month = 1;
	x.year = 2022;
    //print(x);
    Date tommorow;
    tommorow.day = 15;
    tommorow.month = 1;
    tommorow.year = 2022;
    print(tommorow);



	std::count<<x.day<<"."<<x.month<<"."<<x.year << std::enl; 
    return a.exec();
}
