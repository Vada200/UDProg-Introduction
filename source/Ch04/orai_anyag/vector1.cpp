#include "std_lib_facilities.h"

int main () 
{ 

	vector <int> v = {5, 7, 4, 9, 6, 8};
	for (int i = 0 ; i < v.size(); i++)
		cout << v[i] << endl;
	 vector <string> philosopers = {"Kant" , "Plato", "Hume"};
	 
	 for (string name : philosopers)
		 cout << name << endl;
	 
	 vector <double> dv;
	 
	 cout << "Vector size: " << dv.size() << endl;
	 
	 dv.push_back(2.7); //elemet ad hozzá
	 dv.push_back(5.6);

	cout << "Vector size: " << dv.size() << endl;
	
	for (auto number : dv)
		cout << number << endl;

return 0;
}