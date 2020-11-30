#include "std_lib_facilities.h"

int main()
{

	double* a = new double;
	double* b = new double(1);
	
	cout << *a <<endl;
	cout << *b <<endl;
	
	double* c = new double[4];
	
	for (int i = 0; i < 4 ; i++)
		cout << c[i] << endl;
	
	double* e = new double [4] {1.1, 2.2, 3.3, 4.4};
	
	for (int i = 0; i < 4 ; i++)
		cout << e[i] << endl;	
	
	//cout << e [100] << endl; //0 nincs error (nincs range check)
	
	double* p0 = nullptr; //nem mutat sehova	
	
	
	//FONTOS memória szívárgás ellen memória felszabadítás
	delete a; //egy elem
	delete b;
	delete[] c; //tömb
	//delete[] d;
	delete[] e;
	
	
return 0;
}