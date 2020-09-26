#include "std_lib_facilities.h"

int main () 
{ 
	
	vector <string> words;
	
	for (string temp; cin >> temp; )
		words.push_back(temp);
	
	cout << "Number of words: "<< words.size() << endl;
	
	sort(words);
	
	for (string word : words)
		cout << word << endl;
	
return 0;
}