#include <QCoreApplication>
struct Date{
	int day;
	int month;
	int year;

};
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

	 Date x;
	x.day = 14;
	x.month = 1;
	x.year = 2022;
	
	std::count<<x.day<<"."<<x.month<<"."<<x.year << std::enl; 
    return a.exec();
}
