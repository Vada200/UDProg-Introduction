#include "std_lib_facilities.h"

 // 7 - 11 -es feladat

int main () 
{ 	

	double length = 0;
	char unit = 0;
	
	double smallest;
	double largest;
	int piece = 0;;
	double sum = 0;
	vector <double> v;
	cout << "Enter a real number and unit (c, m, f, i)\n";
	while (cin >> length >> unit)
	{
	switch (unit) {
	case 'c':
		cout << length << "cm " << endl;
		sum = sum + length / 100;
		piece++;
		v.push_back(length/100);
	break;
	case 'm':
		cout << length << "m " << endl;
		sum = sum + length;
		piece++;
		v.push_back(length);
	break;
	case 'f':
		cout << length << "ft " << endl;
		sum = sum + length / 3.28;
		piece++;
		v.push_back(length/3.28);
	break;
	case 'i':
		cout << length << "in " << endl;
		sum = sum + length / 39.37;
		piece++;
		v.push_back(length/39.37);
	break;
	default:
		cout << "Error, unit not recognized!\n" ;
		piece++;
	}
	}
	cout << "Sum total: "<<sum << "m "<< endl;
	cout << "Piece total: "<< piece<< endl;

	cout << "Values you entered (converted into meters): ";
	for ( double i : v)
		cout << i << ", ";
	cout << "\n";
	
	sort(v);
	cout << "The smallest value you entered: " << v[0]<<  endl;
	for ( int j = 0; j < v.size() ; j++) {
		
		if (j = v.size()-1) {
		cout << "The largest value you entered: " << v[j]<< endl;
		}
	}
return 0;
}