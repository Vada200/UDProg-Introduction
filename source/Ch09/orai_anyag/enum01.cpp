#include "std_lib_facilities.h"

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

int main ()
{
	 Month m = Month::jan;
	 m = Month::apr;
	 //m = Month(7); //ha lehet ne
	 
	 ++m;
	 
	 cout << m << endl; //Hónap típusra nincs << operátor definiálva -> overload
	 
	 return 0;
}