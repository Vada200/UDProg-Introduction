#include "std_lib_facilities.h"
//A február és a 30-31 napos hónapok miatt problémás, de szemhunyós

//enum
const vector<string> months =
{
	"January",
	"February",
	"March",
	"April",
	"May",
	"June",
	"July",
	"August",
	"September",
	"November",
	"December"
};

enum class Month 
{
	jan, feb, mar, apr, may, jun, july, aug, sept, oct, nov, dec
	
};
//operator overload
Month operator++(Month& m)
{
	m = (m == Month::dec) ? Month::jan : Month((int(m)+1)); //? : if
	//hamis: léptetés in kasztolással
	return m;
}

ostream& operator<<(ostream& os, Month m) // << működését írjuk át (os - outputStream)
{
	return os << months[int (m)]; //aktuális elem kiírása
	
}


class Date { //private érték
//private: //alapért
	int year;
	Month month;
	int day;
	
public:	
	class Invalid {}; //elkapandó a catch-ben
	bool is_valid();
	Date(int y, Month m, int d): year(y), month(m), day(d)  { if (!is_valid()) throw Invalid{};} // : lokális tagok
	void add_day (int n); //fv
	//Getter
	int get_year() {return year;}
	Month get_month() {return month;}
	int get_day() {return day;}
};

bool Date::is_valid()
{
	if (year < 0 || day < 1 || day > 31) return false;
	
	return true;
}

/*
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
*/
void Date::add_day(int n) //Date - add_day fv-e
{
	day += n;
	if (day > 31)
	{
		++month; //enum miatt nem mindegy
		day -= 31; //31-ből kivonni mert kövi hó
		if (month == Month::jan)
		{
			year++;
			
		}
	}

}

int main () 
{
try {
	Date today {2020, Month::aug, 31};

	//cout << "Date: "<< today.year << '.' << today.month << '.' << today.day << '.' << endl;
	 today.add_day(1);
	 //today.day++; //error mert 32
	cout << "Date: "<< today.get_year() << ". " << today.get_month() << ' ' << today.get_day() << '.' << endl;
	
	
	return 0;
} catch (Date::Invalid) {
	cout << "Invalid date\n" << endl;
	return 1;
} catch (exception& e) {
	cout << e.what() << endl;
	return 2;

}
}
