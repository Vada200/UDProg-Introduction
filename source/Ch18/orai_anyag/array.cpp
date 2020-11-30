#include "std_lib_facilities.h"

int main()
{

	double lad[100]; //lad a tömb első elemre mutat (lényegében pointer)
	
	lad[7] = 30;
	
	cout << lad[7] << endl;
	
	for (int i = 0; i < 100; ++i)
	{
		lad[i] = i;
		cout << lad[i] << ' ';
	}

	cout << endl;
	
	double* p = &lad[5]; //lad 5. elem címe
	
	cout << *p << endl;
	cout << p[2] << endl; //pointer "léptetés"
	cout << p[-3] << endl;
	
	p += 2; //léptetés
	cout << *p <<endl;

	for(double* k = &lad[0]; k < &lad[100]; k++)
		cout << *k << ' ';
	
	cout << endl;
	
	return 0;
}