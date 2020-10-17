#include "std_lib_facilities.h"

int main ()
{

	cout << "PLease enter an expression (+, -, *, /)\n";
	cout << "PLease enter an x to the end of the expression\n";
	
	
	int lval = 0, rval = 0; //left value, right value
	
	cin >> lval;
	if (!cin) error ("No val");
	
	for(char op; cin >> op; ) { //op-ként beolvasás
		
		if (op != 'x') cin >> rval; //ameddig nem teszük ki az x-et,  beolvas
		if (!cin) error ("No rval");
		
		switch (op) {
			case '+':
			lval += rval;
				break;
			case '-':
			lval -= rval;
				break;
			case '*':
			lval *= rval;
				break;
			case '/':
			lval /= rval;
				break;
			default:
				cout << "Result: " << lval << endl; //ha vége nem írunk amúgy semmit így jühet ide a resault
			//mivel a lval hoz adtunk valamilyen értéket így ez lesz a result is
				return 0; //kilép
		}
	}
	error ( "Bad extension");
	return 0;
	
}