#include "std_lib_facilities.h"

class My_vector { //priv
	long unsigned int sz; //size / előjel nélküli long típusú int
	double* elem; //elem pointer
	
	void debug(const string& s)
	{
		cerr << this <<" -> " << s << "; elem pointer: "<< elem << endl;
	}
	
public:
	My_vector(int s) : sz(s), elem{new double[s]} // int s értéke bemásolódik sz-be, elem néven lefoglalódik a memóriában a double vector
		{
			debug("(int s) konstruktor");
			for (int i = 0; i < s; i++) elem[i] = 0; //ki 0-zuk a memória területet
		}
		
		My_vector(initializer_list<double> lst) :sz{lst.size()}, elem{new double[sz]} //listát várja
			{
				debug("(initializer_list<double> lst) konstruktor");
				copy(lst.begin(), lst.end(), elem); //mettől, meddig, hova
			}
		
		My_vector(const My_vector& arg) : sz{arg.sz}, elem{new double[arg.sz]}
			{
				debug("másoló konstruktor");
				copy(arg.elem, arg.elem+arg.sz, elem);
			}
		
		My_vector& operator=(const My_vector& arg)//copy
		{
			debug("másoló értékadás");
			double *p = new double[arg.sz]; //lokális pointer
			copy(arg.elem, arg.elem+arg.sz, p);
			delete[] elem; //az eddig használ memóriát felszabadítjuk hogy ne legyen felesleg
			elem = p;
			sz = arg.sz;
			return *this; //önmagára mutat, önhivatkozás
		}
		
		My_vector(My_vector&& arg) : sz{arg.sz}, elem {arg.elem}	//&& mozgatás
			{
				debug("mozgató konstruktor");
				arg.sz = 0;
				arg.elem = nullptr;
			}
		My_vector& operator=(My_vector&& arg) //move
		{
			
			delete[] elem;
			elem = arg.elem; //memória ter átadás oda ahova megy az áthelyezés
			sz = arg.sz;
			arg.elem = nullptr;
			arg.sz = 0;
			debug("mozgató értékadás");
			return *this; 
		}
		
		~My_vector() 
		{ 
			debug("destruktor");
			delete[] elem; 
		} //destructor futás végén lefut
		
		double get(int n) const { return elem[n]; }
		void set(int n, double val) {elem[n] = val;}
		
		int size() const { return sz; }
}; //osztály def után ; kell

My_vector fill()
{
	My_vector temp = {15.5, 16.6, 17.7};
	
	return temp;
}

My_vector glob(10);

int main()
{
	My_vector v2 {12.2, 13.3, 14.4 };
	
	for(int i = 0; i < v2.size(); i++)
		cout << v2.get(i) << endl;

	My_vector v3 (v2); //inicializáljuk, másolni akarjuk a v2 elemét
	cout << endl;
	for(int i = 0; i < v3.size(); i++)
		cout << v3.get(i) << endl;
	//sekély másolás
	My_vector v4(10);
	
	cout << endl;
	
	//cout << v4.size() << endl;
	v4 = v3; //mély másolás
	for(int i = 0; i < v4.size(); i++)
		cout << v4.get(i) << endl;
	
	//cout << v4.size() << endl;
	
	My_vector v5 = fill();
	
	for(int i = 0; i < v5.size(); i++)
		cout << v5.get(i) << endl;
	
	v2 = fill(); //mozgató értékadás
	for(int i = 0; i < v2.size(); i++)
		cout << v2.get(i) << endl;
	
return 0;
}