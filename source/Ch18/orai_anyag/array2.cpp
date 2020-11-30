#include "std_lib_facilities.h"

void print_array(const double a[], int sz) //pointer (double * a)
{
	for (int i = 0; i < sz; i++)
		cout << a[i] << ' '; //range check kellene
	cout << endl;
}

int stringlen(const char* a)
{
	int n = 0;
	while (a[n]) n++;
	return n;
}

int main()
{
	double lad[100]; //lad a tömb első elemre mutat (lényegében pointer)
		
	for (int i = 0; i < 100; ++i)
		lad[i] = i;

	print_array(lad, 100);
	
	cout << "sizeof lad: " << sizeof(lad) << endl; //byze
	
	char ac[] = "Howdy"; 
	
	//cout << "sizeof ac: " << sizeof(ac) << endl; //string vége az +1 byte (\0)
	cout << "sizeof ac: " << stringlen(ac) << endl; //string vége az +1 byte (\0)
	
	return 0;
}