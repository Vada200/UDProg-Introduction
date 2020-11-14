#include "std_lib_facilities.h"

struct Reading {
	int hour;
	double temperature;

};

int main ()
try {
	
	cout << "Enter a input file name: ";
	string iname;
	cin >> iname;
	
	ifstream ist {iname}; //file megnyitás (input stream)


	if (!ist) error ("can't open input file ", iname);
	//bolvasás
	vector<Reading> temps;
	int hour;
	double temperature;
	 while (ist >> hour >> temperature){ //ist-ből olvasunk, azaz a file-ból
		 if ( hour < 0 || hour > 23 ) error ("Hour out of range");
		 temps.push_back(Reading{hour,temperature});
	 }
	 

	cout << "Enter output file name: ";
	string oname;
	cin >> oname;
	
	ofstream ost {oname};
	
	if (!ost) error ("can't open output file ", oname);
	
	for (const auto& r : temps)
		 ost << r.hour << ' ' << r.temperature << endl; //outputba írunk
	
	ost.close();	

return 0;

} catch (runtime_error& e) {
	cerr << "Error: " << e.what() << endl;
	return 1;
} catch (...) {
	cerr << "Some error\n";
	return 2;
}