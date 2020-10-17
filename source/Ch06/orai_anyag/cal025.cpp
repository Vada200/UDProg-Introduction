#include "std_lib_facilities.h"


constexpr char number = '8';
constexpr char quit = 'q';
constexpr char print = ';';
constexpr char result = '=';

double expression();

class Token {
public:
	char kind;
	double value;
	Token (char ch): kind(ch), value(0) {}
	Token (char ch, double val): kind(ch), value(val) {}
};

class Token_stream {
public:
	Token_stream();
	Token get();
	void putback(Token t);
private:
	bool full;
	Token buffer;
};

Token_stream::Token_stream(): full(false), buffer(0) {}

void Token_stream::putback(Token t)
{
	if (full) error("Token_stream buffer full");
	buffer = t;
	full = true;
}

Token Token_stream::get()
{
	if (full)
	{	
		full = false;
		return buffer;
	}

	char ch;
	cin >> ch;

	switch(ch) {
		case quit:
		case print:
		case '(':
		case ')':
		case '+':
		case '-':
		case '*':
		case '/':
		case '%':
			return Token(ch);
		case '.':
		case '0': case '1': case '2': case '3':
		case '4': case '5': case '6': case '7':
		case '8': case '9':
		{
			cin.putback(ch);
			double val = 0;
			cin >> val;
			return Token(number, val);
		}
		default:
			error("Bad token");
			return 0;
	}
}

Token_stream ts;

double primary()
{
	Token t = ts.get();
	switch(t.kind)
	{
		case '(':
		{
			double d = expression();
			t = ts.get();
			if (t.kind != ')') error("')' expected");
			return d;
		}
		case number:
			return t.value;
		case '-':
			return - primary();
		case '+':
			return primary();
		default:
			error("primary expected");
			return 0;
	}
}

double term()
{
	double left = primary();
	Token t = ts.get();
	while(true){
		switch(t.kind){
			case '*':
				left *= primary();
				t = ts.get();
				break;
			case '/':
			{
				double d = primary();
				if ( d == 0 ) error("divide by zero");
				left /= d;
				t = ts.get();
				break;
			}
			
			case '%':
			{
				/*
				int i1 = narrow_cast<int>(left); //left castolás integerre
				int i2 = narrow_cast<int>(primary()); //same
				if (i2 == 0) error ("%: zero divider");
				left == i1 % i2;
				t = ts.get();
				break;
				*/
				
				
				double d = primary();
				if ( d== 0) error ("%: zero divider");
				left = fmod (left,d);
				t = ts.get();
				break;
				
				
			}
			
			/*
				left %= primary();
				t = get_token();
				break;
				*/
			default:
				ts.putback(t);
				return left;
		}
	}
}

double expression() 
{
	double left = term();
	Token t = ts.get();
	while(true){
		switch(t.kind){
			case '+':
				left += term();
				t = ts.get();
				break;
			case '-':
				left -= term();
				t = ts.get();
				break;
			default:
				ts.putback(t);
				return left;
		}
	}
}

void calculate(){


	while(cin)
	{
		Token t = ts.get();
		
		while (t.kind == print) t = ts.get();
		if (t.kind == quit) return;
		
		ts.putback(t);
		cout << result << expression() << endl;

	}
}

int main()
try {
	calculate();

	return 0;

} catch (exception& e) {
	cerr << e.what() << endl;
	return 1;
} catch (...) {
	cerr << "exception\n";
	return 2;
}