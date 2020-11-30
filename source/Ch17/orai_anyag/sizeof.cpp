#include "std_lib_facilities.h"

int main()
{
	//sizeof -> obj mekkora memóriát foglal
	cout << "The size of int is " << sizeof(int) << " bytes \n";
	cout << "The size of char is " << sizeof(char) << " bytes \n";
	cout << "The size of double is " << sizeof(double) << " bytes \n";
	cout << endl;
	cout << "The size of int* is " << sizeof(int*) << " bytes \n";
	cout << "The size of char* is " << sizeof(char*) << " bytes \n";
	cout << "The size of double* is " << sizeof(double*) << " bytes \n";
	//32 -> 64 bites rendszerek
return 0;
}