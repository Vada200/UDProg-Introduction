#include "std_lib_facilities.h"

int main ()
{

	cout << "Please enter a real number: ";
	double n; // . és nem ,
	cin >> n;
	
	cout << "The number is: "<< n << endl;
	cout << "+1=" << n+1<< endl;
	cout << "*3=" << n*3<< endl;
	cout << "*önmaga (^2)=" << n*n<< endl;
	cout << "/2=" << n/2<< endl;
	cout << "négyzetgyök: " << sqrt(n)<< endl;
	
	return 0;

}