#include "std_lib_facilities.h"

int main () 
{ 
	constexpr double cm_per_inch = 2.54; //értéket nem vehet fel != const
	double length = 1;
	char unit = 0; //cm or inch
	
	cout << "Please enter a length followed by a unit (c or i)! \n";
	cin >> length >> unit;
	
	if ( unit == 'i')
		cout << length << "in == " << length * cm_per_inch << " cm \n";
	else
		cout << length << "cm == " << length / cm_per_inch << " in \n";

return 0;
}