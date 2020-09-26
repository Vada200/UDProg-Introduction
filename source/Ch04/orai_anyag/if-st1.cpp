#include "std_lib_facilities.h"

int main () 
{ 
	int a = 0;
	int b = 0;
	
	cout << "Please enter two integer values: ";
	cin >>a >> b;
	//szelekció
	if (a < b)
		cout << "Max (" << a << ',' << b << ") is " << b << endl;
	else
		cout << "Max (" << a << ',' << b << ") is " << a << endl;
	

return 0;
}