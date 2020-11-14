#include "std_lib_facilities.h"

int main()
{
	cout << 1234 << "\t(decimal)\n"
	<< hex << 1234 << "\t(hexadecimal)\n"
	<< oct << 1234 << "\t(octal)\n" //8as számrendsz
	<< '\n'; //ha nem írjuk át akkor octal-ban marad
	
	cout << showbase << dec;
	cout << 1234 << "\t(decimal)\n"
	<< hex << 1234 << "\t(hexadecimal)\n"
	<< oct << 1234 << "\t(octal)\n" //8as számrendsz
	<< '\n';
	
	cout << noshowbase << dec;
	
	cout << 1234.56789 << "\t(defaultfloat)\n" 
	<< fixed << 1234.56789 << "\t(fixed)\n" 
	<< scientific << 1234.56789 << "\t(scientific)\n" ;
	cout << endl;
	
	cout << defaultfloat << setprecision(10)
	<< 1234.56789 << "\t(defaultfloat)\n" 
	<< fixed << 1234.56789 << "\t(fixed)\n" 
	<< scientific << 1234.56789 << "\t(scientific)\n" ;
	
	cout << endl;
	cout << 12345
	<< '|' << setw(4) << 123456 << '|'
	<< setw(8) << 12345 << '|' << 123456 << '\n';
	

return 0;
}