#include "std_lib_facilities.h"

void print (vector <double>& v) 
//& -->referencia miatt gyorsabb a lefutás 
//mert nem másolódik a v, hanem a v ugyanaz lesz mint a vd1
{
		cout << "{";
		for (int i = 0; i < v.size(); i++)
		{
			cout << v[i];
			if(i < v.size()-1) cout << ",";
		}
		cout << "}\n";
		
}

int main()
{
	vector <double> vd1 (10);
	vector <double> vd2 (100000);
	
	print(vd2);
	
	return 0;
	
}