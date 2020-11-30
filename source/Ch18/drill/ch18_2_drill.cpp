#include "std_lib_facilities.h"

vector<int> gv = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};

void f (vector<int> v)
{
	vector<int> lv(v.size());
	
	for (int i = 0; i < gv.size(); i++)
	{
		lv[i] = gv[i];
		cout << lv[i]<< " ";
	}
	
	cout << endl;
	
	vector<int> lv2 = v;
	for (int i = 0; i < lv2.size(); i++)
	{
		cout << lv2[i]<< " ";
	}
	cout << endl;
}

int main () 
{ 	
	f(gv);

	vector<int> vv(10);
	
	int n = 1;
	int i = 0;
	for (int j = 1; j <= vv.size(); j++){
		n = n*j;
		vv[i] = n;
		i++;
	}
	cout << endl;
	f(vv);
	
return 0;
}