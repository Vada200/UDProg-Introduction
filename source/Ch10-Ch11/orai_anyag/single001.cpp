#include "std_lib_facilities.h"

int main ()

{

	cout << "Please enter an integer in the range 1 to 10: ";
	int n = 0;
	while (cin >> n){
		if (n >= 1 && n <= 10) break;
		cout << "Sorry "<< n << " is not in [1:10]! \n";
	}
	
	cout << "Thanks: " << n <<endl;

return 0;
}