#include "std_lib_facilities.h"

void skip_to_int()
{
		if (cin.fail())
		{
			cin.clear();
			for (char ch; cin >> ch; )
			{
				if (isdigit(ch) || ch == '-')
				{
					cin.unget(); //visszatesszük, visszaugrik a kezelésre
					return;
				}
			}
		}
		error ("No input"); //bad()
}

int get_int()
{
	int n =0;
	while(true)
	{
		if (cin >> n) return n;
		cout << " Sorry, that was not a number\n";
		skip_to_int();
	}
	
}

int get_int(int low, int high) //interv
{
	while(true)
	{
		int n = get_int(); //ez a fenti get_int
		if (low <= n && high >= n) return n;
		cout << " Not in ["<< low << " ; " << high<<"] range!"<<endl; 
	}
}

int main ()

try {

	int n = get_int(1,10);
	
	cout << "Thanks: " << n <<endl;

return 0;
} catch (runtime_error& e) {
	cerr << "Error: " << e.what() << endl;
	return 1;
} catch (...) {
	cerr << "Some error\n";
	return 2;
}