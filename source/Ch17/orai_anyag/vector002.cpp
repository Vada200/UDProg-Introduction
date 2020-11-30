#include "std_lib_facilities.h"

class My_vector { //priv
	int sz; //size
	double* elem; //elem pointer
	
public:
	My_vector(int s) : sz(s), elem{new double[s]} // int s értéke bemásolódik sz-be, elem néven lefoglalódik a memóriában a double vector
		{
			for (int i = 0; i < s; i++) elem[i] = 0; //ki 0-zuk a memória területet
		}
		~My_vector() { delete[] elem; } //destructor futás végén lefut
		
		double get(int n) const { return elem[n]; } //n. elem rekérdezése
		
		void set(int n, double val) {elem[n] = val;} 
		
		int size() const { return sz; }
}; //osztály def után ; kell

int main()
{
	My_vector v(10);
	
	v.set(2, 2.2);
	
	cout << "v[2] " << v.get(2) << endl;
	cout << "Méret: " << v.size() << endl;
	cout << "Vektor elemei: ";
	for (int i = 0; i < 10 ; i++)
		cout << v.get(i) << " ";

	cout << endl;
return 0;
}