#include "std_lib_facilities.h"

namespace unideb {
	int my_find (vector<string>, string);
	int my_find (vector<string>, string, int);
}
namespace bme {
	int my_find (vector<string>, string);
	int my_find (vector<string>, string, int);
}
 
//using namespace unideb; //universal
//using unideb::my_find;

int main()
{
	vector <string> words = {"apple", "pear", "grapes", "lemon", "prange"};
	string s = "pear";
	
	int index = bme::my_find(words, s, 3); //vagy itt megadjuk neki az unideb névteret
	
	if (index >= 0)	
		cout << "Found at index "<< index << endl;
	else
		cout << "Not found" << endl;
	

return 0;
}
namespace unideb {
	
int my_find(vector <string> v, string s)
{
	
	for ( int i = 0; i < v.size(); i++)
		if ( v[i] == s)
			return i;
	return -1;
}

int my_find(vector <string> v, string s, int hint)
{
	cout << "unideb my_find\n";
	if (hint < 0 || hint >= v.size()) hint = 0;
	
	for ( int i = hint; i < v.size(); i++)
		if ( v[i] == s)
			return i;
		
	if (hint > 0)
		for ( int i = 0; i < v.size(); i++)
			if ( v[i] == s)
			return i;
		
		return -1; 
}  
		
}//unideb vége

namespace bme {
int my_find(vector <string> v, string s)
{
	for ( int i = 0; i < v.size(); i++)
		if ( v[i] == s)
			return i;
	return -1;
}

int my_find(vector <string> v, string s, int hint)
{
	cout << "bme my_find\n";
	if (hint < 0 || hint >= v.size()) hint = 0;
	
	for ( int i = hint; i < v.size(); i++)
		if ( v[i] == s)
			return i;
		
	if (hint > 0)
		for ( int i = 0; i < v.size(); i++)
			if ( v[i] == s)
			return i;
		
		return -1; 
}  
		
}//bme vége
