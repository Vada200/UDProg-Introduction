#include "std_lib_facilities.h"

void f (int a, int b)
{
	cout << a << ' ' << b << endl;
}

int main()
{
	vector<int> v (10);
	
	int i = 0;
	while (i<9)
		v[i] = i++; //kiértékelési sorrend nincs meghatározva c++-ban -> error
	
	for (const auto& e : v)
		cout << e << endl;
	
	int x =i++ + i++; //változó érték módosítás --> error
	
	cout << x << endl;
	
	f(++i, ++i);
	
	return 0;
}