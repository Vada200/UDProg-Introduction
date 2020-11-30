#include "std_lib_facilities.h"
int s = 10;
int* ga = new int[s] {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};

void f(int* a, int n)
{
	int* la = new int[10];
	
	for (int i = 0; i < 10; i++)
	{
		la[i] = ga[i];
		cout << la[i] << " ";
	}
	cout << endl;

	int* p = new int[n];
	for (int i = 0; i < 10; i++)
	{
		p[i] = a[i];
		cout << p[i] << " ";
	}
	cout << endl;
	
	delete[] p;
}

int main () 
{ 	
	f(ga, s);
	cout << endl;
	int* aa = new int [10];
	
	int n = 1;
	int i = 0;
	for(int j = 1; j<=10; j++){
		n = n*j;
		aa[i] = n;
		i++;
	}
	f(aa, s);
return 0;
}