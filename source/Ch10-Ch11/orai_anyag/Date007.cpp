#include "std_lib_facilities.h"
//A február és a 30-31 napos hónapok miatt problémás, de szemhunyós

namespace UDChrono {

class Year {
	
	static constexpr int min = 1800;
	static constexpr int max = 2077;
	
public:
	class Invalid{};
	Year(int x) : y(x) { if (x < min || x > max) throw Invalid{}; } 
	int year() {return y;} //a priv. y-t adja vissza
	void increment() {y++; if (y > max) throw Invalid{};}
	
private:
	int y;

};

Year operator++(Year& year)
{
	year.increment();
	
	return 0;
}

ostream& operator<<(ostream& os, Year year)
{
	return os << year.year();
}

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
	"October",
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
	m = (m == Month::dec) ? Month::jan : Month(int(m)+1); //? : if
	//hamis: léptetés in kasztolással
	return m;
}

ostream& operator<<(ostream& os, Month m) // << működését írjuk át (os - outputStream)
{
	return os << months[int (m)]; //aktuális elem kiírása
	
}


class Date { //private érték
//private: //alapért
	Year year;
	Month month;
	int day;
	
public:	
	class Invalid {}; //elkapandó a catch-ben	
	Date(): year(Year{2001}), month(Month::jan), day(1) {} //alapértelmezett default érték
	Date(Year y, Month m, int d): year(y), month(m), day(d)  { if (!is_valid()) throw Invalid{};} // : lokális tagok
	
	bool is_valid();
	void add_day (int n); //fv
	//Getter
	Year get_year() const {return year;}
	Month get_month() const {return month;}
	int get_day() const {return day;}
};

bool Date::is_valid()
{
	if (day < 1 || day > 31) return false;
	
	return true;
}

void Date::add_day(int n) //Date - add_day fv-e
{
	day += n;
	if (day > 31)
	{
		++month; //enum miatt nem mindegy
		day -= 31; //31-ből kivonni mert kövi hó
		if (month == Month::jan)
		{
			++year;
			
		}
	}
}
} //UDChrono vége

ostream& operator<< (ostream& os, UDChrono::Date& date)
{
	return os << date.get_year() << '.' << date.get_month() << ' ' << date.get_day() << '.'<<endl;
}

istream& operator>>(istream& is, UDChrono::Date& date)
{
	int y ,m ,d;
	char d1, d2; //dot1 dot2
	
	is >> y >> d1 >> m >> d2 >> d;
	
	if (!is) return is; //hívási helyen lesz kezelve
	if (d1 != '.' || d2 != '.')
	{
		cout << "Invalid format\n";
		is.clear(ios_base::failbit);
	return is;
	}
	date = UDChrono::Date{UDChrono::Year{y}, UDChrono::Month(m-1), d};
	return is;
}

int main () 
{
try {
	UDChrono::Date today {UDChrono::Year{2020}, UDChrono::Month::aug, 13};
	
	today.add_day(1);
	
	cout << "Date: " << today;
	
	UDChrono::Date tomorrow;
	
	cout << "Please enter a valid date in the YYYY.MM.DD format. \n";
	cin >> tomorrow;
	
	cout << "Date entered: " << tomorrow << endl;
	
	vector<UDChrono::Date> dates(10);

	
	return 0;
} catch (UDChrono::Date::Invalid) {
	cout << "Invalid date\n" << endl;
	return 1;
} catch (UDChrono::Year::Invalid) {
	cout << "Invalid year\n" << endl;
	return 1;
} catch (exception& e) {
	cout << e.what() << endl;
	return 2;

}
}
