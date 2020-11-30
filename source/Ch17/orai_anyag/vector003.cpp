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
		
		double get(int n) const { return elem[n]; }
		void set(int n, double val) {elem[n] = val;}
		
		int size() const { return sz; }
}; //osztály def után ; kell

My_vector* some_fct()
{
	My_vector* my_vec = new My_vector(10); //tárhely foglalás memóriában
	return my_vec; //My_vector típusú obj-ra mutat
}

int main()
{
	My_vector* my = some_fct();
	
	cout << my->size() << endl; //pointernél -> van
	
	delete my;

return 0;
}