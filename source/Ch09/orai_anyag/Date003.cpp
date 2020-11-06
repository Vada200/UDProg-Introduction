#include "std_lib_facilities.h"
//A február és a 30-31 napos hónapok miatt problémás, de szemhunyós
class Date { //private érték
//private: //alapért
	int year, month ,day;
	
public:	
	Date(int y, int m, int d); //csak definiáljuk itt (konstruktor - ugyanaz a neve mint aaz osztálynak)
	void add_day (int n); //fv
	//Getter
	int get_year() {return year;}
	int get_month() {return month;}
	int get_day() {return day;}
};

Date::Date(int y, int m, int d) //konstruktor megadása itt történik
{
	if (y > 0)
		year = y;
	else
		error ("Invalid year");
	
	if (m <= 12 && m > 0)
		month = m;
	else
		error ("Invalid month");
	
	if (d > 0 && d <=31)
		day = d;
	else
		error ("Invalid day");	
}

void Date::add_day(int n) //Date - add_day fv-e
{
	day += n;
	if (day > 31)
	{
		month++;
		day -= 31; //31-ből kivonni mert kövi hó
		if (month > 12)
		{
			year++;
			month -= 12;
		}
	}

}

int main () 
{
try {
	Date today {2020, 8, 31};

	//cout << "Date: "<< today.year << '.' << today.month << '.' << today.day << '.' << endl;
	 today.add_day(1);
	 //today.day++; //error mert 32
	cout << "Date: "<< today.get_year() << '.' << today.get_month() << '.' << today.get_day() << '.' << endl;
	
	return 0;
} catch (exception& e) {
	cout << e.what() << endl;
	return 1;
}
}
