#include "std_lib_facilities.h"

class My_vector { //priv
	int sz; //size
	double* elem; //elem pointer
	
public:
	My_vector(int s) : sz(s), elem{new double[s]} // int s értéke bemásolódik sz-be, elem néven lefoglalódik a memóriában a double vector
		{ //konstruktor
			for (int i = 0; i < s; i++) elem[i] = 0; //ki 0-zuk a memória területet
		}
		~My_vector() { delete[] elem; } //destructor futás végén lefut
		int size() const { return sz; } //getter
}; //osztály def után ; kell

int main()
{
	
	My_vector v(10);
	
	cout << "Méret: " << v.size() << endl;

return 0;
}