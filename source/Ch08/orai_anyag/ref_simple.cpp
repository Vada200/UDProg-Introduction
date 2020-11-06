#include "std_lib_facilities.h"

int main ()
{
	int i = 7;
	cout << "i: "<< i << endl;
	
	int& r = i;
	cout <<"r: "<< r << endl;
	
	r = 9; //r-en keresztül módosítjuk i-t
	cout << "r = 9 \n";
	cout <<"r: "<< i << endl;
	cout <<"r: "<< r << endl;
	
	const int& cr = i; 
	//cr = 100; error mert konstans módosítás
	//cout << "cr = 100 \n";
	cout <<"r: "<< i << endl;
	cout <<"r: "<< r << endl;
	cout <<"cr: "<< cr << endl; //ez nem lesz erroros mert ez csak beolvas
	
	i = 100;
	cout << "i = 100 \n";
	cout <<"r: "<< i << endl;
	cout <<"r: "<< r << endl;
	return 0;
	
}