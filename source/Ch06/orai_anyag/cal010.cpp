#include "std_lib_facilities.h"
//ppt nyelvtani szabály alapján

double expression(); //csak bevezetés hogy a program tudja miről van szó

class Token {
public:
	char kind;
	double value;
	Token (char ch): kind (ch), value(0) {}
	Token (char ch, double val): kind (ch), value(val) {}
	
	
};

Token get_token(){
	
	char ch;
	cin >> ch;
	
	switch(ch) {
		case '(':
		case ')':
		case '+':
		case '-':
		case '*':
		case '/':
		//case '%':
			return Token(ch); //ez lesz a kind --> avagy t.kind később
		case '.': //tized pont
		case '0': case '1': case '2': case '3': case '4':
		case '5': case '6': case '7': case '8': case '9': 
		{
			cin.putback(ch); //ha többtagú a szám akkor ez megkövetelt
			double val = 0;
			cin >> val;
			return Token('8', val); //primary-ba kell 8-as típussal
		}
		default:
			error("Bad token");
			return 0;
	}
}

double primary(){ 
	
	Token t = get_token();
	switch(t.kind)
	{
		case '(':
		{
			double d = expression(); //a zárójelben lévő dolgokat az expressonbe -> ott kifejezi
			t = get_token();
			if (t.kind != ')') error ("')' expected"); //bezáró ) jelet vár, ha nincs, az baj
			return d;
		}
		case '8': //jelezzük milyen a típusa (szám)
			return t.value;
		default:
			error ("primary expected");
			return 0;
	}
}


double term() { // *, /, %
	
	double left = primary ();
	Token t = get_token();
		while(true) { //amíg van addig értékelje a műveletet
			switch(t.kind) {
				case '*':
					left *= primary();
					t = get_token();
					break;
				case '/':
				{ //szükséges
					double d = primary();
					if(d==0) error ("divide by zero");
					left /= d;
					t = get_token();
					break;
				}
				/*
				case '%': //maradék
					left %= primary();
					t = get_token();
					break;
					*/
				default:
					return left;
					
			}
		}
}	


double expression() { //+,-
	
	double left = term(); //term fv-be átdobjuk
	Token t = get_token();
	
	while(true) { //amíg van addig értékelje a műveletet
		switch(t.kind) {
			case '+':
			left += term();
			t = get_token();
			break;
		case '-':
			left -= term();
			t = get_token();
			break;
		default:
			return left; //ha nincs több művelet akkor ez a result
		}
	}
}
int main ()
try {
	while (cin)
		cout << expression() << endl;
	
	return 0;
	
} catch (exception& e) {
		cerr << e.what() << endl;
		return 1;
		
} catch (...) {
	cerr << "exception\n";
	return 2;
}