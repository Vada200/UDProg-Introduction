#include "std_lib_facilities.h"

int main()
{
		vector <int> v { 1,2,3,4,5,6,7,8};
		
		for (int i = 0; i < v.size(); i++)
			cout << v[i] << endl;
		
		cout << "range for; value" << endl;
		for ( int i : v)
			cout << i << endl;
		
		cout << "range for; reference" << endl;
		for ( int& i : v) //i csak egy név az i-edik elemre -> int& i = v[k]
			cout << i << endl;
		
		cout << "range for; const reference" << endl;
		for ( const int& i : v) //const int& i = v[k]
			cout << i << endl;
		
		cout << "range for; reference" << endl;
		for ( const auto& i : v) 
			cout << i << endl;
					
		
		
		return 0;
		
}