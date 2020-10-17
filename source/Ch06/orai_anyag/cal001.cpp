#include "std_lib_facilities.h"

int main ()
{

	cout << "PLease enter an expression (+, -)\n";
	
	int lval = 0, rval = 0; //left value, right value
	char op = 0; //operator
	
	int res;
	
	cin >> lval >> op >> rval;
	
	if ( op == '+')
		res = lval + rval;
	else if (op == '-')
		res = lval - rval;
	
	cout << "Result: " << res << endl;
	
	return 0;
	
}