#include "std_lib_facilities.h"

int main()
{
	int var = 17;
	int* ptr = &var; //var címére mutató pointer
	//ptr mutat a var-ra
	
	int x = 17;
	int* pi = &x; //&x -> x obj memóriacíme
	
	double e = 2.71;
	double* pd = &e;
	
	cout << "pi == " << pi << " ; contents of pi ==" << *pi << endl;
	
	cout << "pd == " << pd << " ; contents of pd ==" << *pd << endl;
	//int -> 4 bájt (ennek az 1. bájtának címét tudjuk meg)
	
	*pi = 27;
	*pd = 3.14;

	cout << "pi == " << pi << " ; contents of pi ==" << *pi << endl;
	
	cout << "pd == " << pd << " ; contents of pd ==" << *pd << endl;
	//memória cím ugyanaz, az érték változik
	
	*pd = *pi;

	cout << "pi == " << pi << " ; contents of pi ==" << *pi << endl;
	
	cout << "pd == " << pd << " ; contents of pd ==" << *pd << endl;
	//pi vel mutatott értéket megkapja a pd


	//int i = pi; //error -> integer nem kaphat pointer értéket
	//pi = 7 //error pointer nem kaphat intet --> *pi = 7 ez jó
	//char* pc = pi; //error -> pointert típusa fixálódik
	
	
	
return 0;
}