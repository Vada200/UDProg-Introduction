#include "std_lib_facilities.h"

int main()
{
	int birth_year = 2001;
	cout << "Birth year: \n";
	cout << birth_year << "\t(decimal)\n"
	<< hex << birth_year << "\t(hexadecimal)\n"
	<< oct << birth_year << "\t(octal)\n" //8as számrendsz
	<< '\n'; //ha nem írjuk át akkor octal-ban marad
	cout << "My age: \n";
	cout << 19 << "\t(octal)" << endl ;
	cout << dec << 19 << "\t(decimal)\n" << endl;
	
	int a, b, c, d;
	cin >> a >> oct >> b >> hex >> c >> d;
	cout << a <<'\t' << b <<'\t' << c <<'\t' << d <<'\n' ;
	
	double n = 1234567.89;
	
	cout << defaultfloat << setprecision(10) << n << endl;
	cout << fixed << n << "\t(fixed)\n" ;
	cout << scientific << n << "\t(scientific)\n" ;
	cout << endl;
	
	
return 0;
}