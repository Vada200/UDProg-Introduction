#include "std_lib_facilities.h"
 // 1 - 5-es feladat

int main () 
{ 	

	double a = 0;
	double b = 0;
	cout << "Enter two real number \n";
	while (cin >> a >> b)
	{
		
		cout << "a="<< a << " b="<< b << endl;
		
		if (a < b) {
			cout << "The smaller value: " << a << endl;
			cout << "The larger value: " << b << endl;
		}
		else {
			
			cout << "The smaller value: " << b << endl;
			cout << "The larger value: " << a << endl;
		}
		int abso = abs(a-b);
		if (abso = 1)
			cout << "The numbers are almost equal";
	}


return 0;
}