#include "std_lib_facilities.h"

int main ()
{
	
	cout << "Hány számot irassak ki növekvő sorrendben?\n";
	int db;
	cin >> db;
	int szamlalo = 0;
	while (szamlalo < db) {
		cout << szamlalo << " \n";
		szamlalo++;
	}
	

	
	
	return 0 ;
}