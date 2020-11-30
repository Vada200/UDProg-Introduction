#include "std_lib_facilities.h"

class My_vector { //priv
	long unsigned int sz; //size / előjel nélküli long típusú int
	double* elem; //elem pointer
	
public:
	My_vector(int s) : sz(s), elem{new double[s]} // int s értéke bemásolódik sz-be, elem néven lefoglalódik a memóriában a double vector
		{
			for (int i = 0; i < s; i++) elem[i] = 0; //ki 0-zuk a memória területet
		}
		
		My_vector(initializer_list<double> lst) :sz{lst.size()}, elem{new double[sz]} //listát várja
			{
				copy(lst.begin(), lst.end(), elem); //mettől, meddig, hova
			}
		
		~My_vector() { delete[] elem; } //destructor futás végén lefut
		
		double get(int n) const { return elem[n]; }
		void set(int n, double val) {elem[n] = val;}
		
		int size() const { return sz; }
}; //osztály def után ; kell


int main()
{
	My_vector my(10);
	
	cout << my.size() << endl; //pointernél -> van
	
	My_vector v2 {12.2, 13.3, 14.4 };
	
	for(int i = 0; i < v2.size(); i++)
		cout << v2.get(i) << endl;

return 0;
}