#include "std_lib_facilities.h"

int main ()

try {

	cout << "Please enter an integer in the range 1 to 10: ";
	int n = 0;
	while(true) //végtelen ciklus
	{
		cin >> n;
		if (cin) //itt azt vizsgáljuk hogyha nincs hiba
		{
			if (n >= 1 && n <= 10) break;
			cout << "Sorry "<< n << " is not in [1:10]! \n";
		} 
		else if (cin.fail()) //ha nem egy integerről van szó
		{
			cin.clear();
			cout << "Sorry that was not an integer!\n";
			for (char ch; cin >> ch && !isdigit(ch); )//karakterenként olvasunk és megnézzük a kövi szám eback
				;
			if (!cin) error ("No input"); //bad()
			cin.unget(); //visszatesszük, visszaugrik a kezelésre
		}
		else
		{
				error ("no input"); //bad()
		}
		
	}
	
	cout << "Thanks: " << n <<endl;

return 0;
} catch (runtime_error& e) {
	cerr << "Error: " << e.what() << endl;
	return 1;
} catch (...) {
	cerr << "Some error\n";
	return 2;
}