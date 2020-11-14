#include "std_lib_facilities.h"

struct Point {
	int x;
	int y;
	char sep = ',';

};

int main ()
try {
	
	cout << "Enter seven x,y pairs separated by ',': \n";

	vector<Point> original_points; 
	int x;
	int y;
	char sep;
	int guard = 0;
	while (cin >> x >> y >> sep){ //konzolból olvas
	if (sep != ',') error ("',' missing \n");
		 original_points.push_back(Point{x,y});
		 guard++;
		 if (guard == 7 ) break;
	 }
	if (guard < 7 || guard > 7) error ("Coordinates missing");
	cout << "Coordinates saved \n";
	
	//cout << "Enter output file name: ";
	//string oname;
	//cin >> oname;
	
	//ofstream ost {oname};
	ofstream ost {"mydata.txt"};
	
	if (!ost) error ("can't open output file ", "mydata.txt");
	
	for (const auto& p : original_points)
		 ost << '(' << p.x << ',' << p.y << ')' << endl; //outputba írunk
	
	ost.close();
	
	ifstream ist {"mydata.txt"};
	if (!ist) error ("can't open input file ", "mydata.txt");
	vector<Point> temps;
	 while (ist >> x >> y >> sep){ //ist-ből olvasunk, azaz a file-ból
		 temps.push_back(Point{x,y});
	 }
//ugyanazon file --> error?	

return 0;

} catch (runtime_error& e) {
	cerr << "Error: " << e.what() << endl;
	return 1;
} catch (...) {
	cerr << "Some error\n";
	return 2;
}