#include "std_lib_facilities.h"

int my_find (vector<string>, string);
int my_find (vector<string>, string, int);

int main()
{
	vector <string> words = {"apple", "pear", "grapes", "lemon", "prange"};
	string s = "pear";
	
	int index = my_find(words, s, 3);
	
	if (index >= 0)	
		cout << "Found at index "<< index << endl;
	else
		cout << "Not found" << endl;
	

return 0;
}

int my_find(vector <string> v, string s)
{
	for ( int i = 0; i < v.size(); i++)
		if ( v[i] == s)
			return i;
	return -1;
}

int my_find(vector <string> v, string s, int hint)
{
	
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
