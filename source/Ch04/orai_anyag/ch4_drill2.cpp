#include "std_lib_facilities.h"
	// 6 -os feladat

int main () 
{ 	

	double a = 0;
	double largest = 0;
	double smallest=1000;
	cout << "Enter a real number \n";
	while (cin >> a)
	{
	if ( a > largest) {
		largest = a;
		}
	cout << "The largest so far: "<< largest << endl;
	if ( a < smallest) {
		smallest = a;
		}
	cout << "The smallest so far: "<< smallest << endl;
	}


return 0;
}