#include "std_lib_facilities.h"
//scope-ok {} jeleken belül

int in_scope = 200;

int main()
{
	{
		int in_scope = 42;
		{
			cout << in_scope << endl;
			for (int i = 0; i < 5; i++) //az i statement scope
			{
				cout << in_scope << endl;
			}
			int in_scope = 100; //felüldefiniálás
			cout << in_scope << endl;
		}
	}
	cout << in_scope << endl;
	
	return 0;

}