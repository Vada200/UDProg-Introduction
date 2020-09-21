#include "std_lib_facilities.h"

int main()
{ 
	const double cm_per_inch = 2.54; //const: állandó érték
	double length = 1;
	
	while (length !=0)
	{
	cout << "Please enter a distance in inches: ";
	cin >> length;
	cout << "length in cm:" << length * cm_per_inch << endl;
	}

return 0;
}