#include "std_lib_facilities.h"

int main()
{
	string name;
	getline(cin, name);
	
	cout << name << endl;
	
	string first, last;
	
	stringstream ss {name};
	
	ss >> first;
	ss >> last;
	
	cout << "Name: " << first << ' ' << last << endl;
	
	return 0;
}