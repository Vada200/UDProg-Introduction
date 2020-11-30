#include "std_lib_facilities.h"

class My_out_of_range{};

class My_vector { //priv
	long unsigned int sz; //size / előjel nélküli long típusú int
	double* elem; //elem pointer
	long unsigned int space;
	
	void debug(const string& s)
	{
		cerr << this <<" -> " << s << "; elem pointer: "<< elem << endl;
	}
	
public:

		My_vector(): sz(0), elem{nullptr}, space(0) {}

		explicit My_vector(int s) : sz(s), elem{new double[s]} // int s értéke bemásolódik sz-be, elem néven lefoglalódik a memóriában a double vector
		{ //explicit -> ne legyen konverzió
			//debug("(int s) konstruktor");
			for (int i = 0; i < s; i++) elem[i] = 0; //ki 0-zuk a memória területet
		}
		
		My_vector(initializer_list<double> lst) :sz{lst.size()}, elem{new double[sz]} //listát várja
			{
				//debug("(initializer_list<double> lst) konstruktor");
				copy(lst.begin(), lst.end(), elem); //mettől, meddig, hova
			}
		
		My_vector(const My_vector& arg) : sz{arg.sz}, elem{new double[arg.sz]}
			{
				//debug("másoló konstruktor");
				copy(arg.elem, arg.elem+arg.sz, elem);
			}
		
		My_vector& operator=(const My_vector& arg) //ha nincs elég memória akkor ez fut le
		{
			//debug("másoló értékadás");
			if(this == &arg) //ha x = x -> mostani obj = másolandó vektor címe
				return*this; //self-reference
			
			
			
			if (arg.sz <= space)
			{
				for(int i = 0; i < arg.sz; i++) elem[i] = arg.elem[i];
				sz = arg.sz;
				return *this;
			}
			
			double *p = new double[arg.sz]; //lokális pointer
			copy(arg.elem, arg.elem+arg.sz, p);
			delete[] elem; //az eddig használ memóriát felszabadítjuk hogy ne legyen felesleg
			elem = p;
			sz = arg.sz;
			return *this; //önmagára mutat, önhivatkozás
		}
		
		My_vector(My_vector&& arg) : sz{arg.sz}, elem {arg.elem}	//&& mozgatás
			{
				//debug("mozgató konstruktor");
				arg.sz = 0;
				arg.elem = nullptr;
			}
		My_vector& operator=(My_vector&& arg)
		{
			
			delete[] elem;
			elem = arg.elem; //memória ter átadás oda ahova megy az áthelyezés
			sz = arg.sz;
			arg.elem = nullptr;
			arg.sz = 0;
			//debug("mozgató értékadás");
			return *this; 
		}
		
		~My_vector() 
		{ 
			//debug("destruktor");
			delete[] elem; 
		} //destructor futás végén lefut
		
		//double get(int n) const { return elem[n]; } //getter
		//void set(int n, double val) {elem[n] = val;} //setter
		
		double& operator[] (int n) {return elem[n]; } //csak referenciával tudjuk elérni az elemet
		double operator[] (int n) const {return elem[n]; } //const korrekció
		
		int size() const { return sz; }
		
		int capacity() const {return space;}
		
		void reserve(int newalloc)
		 {
			 if(newalloc <= space) return; //ne csináljon semmit
			 double* p = new double[newalloc];
			 for (int i = 0; i < sz; i++) p[i] = elem[i];
			 delete[] elem;
			 elem = p;
			 space = newalloc;
			 
		 }
		
		void resize(int newsize)
		{
			reserve(newsize);
			for(int i = sz; i < newsize; i++) elem[i] = 0;
			sz = newsize;
		}
		
		void push_back(double d)
		{
			if (sz == 0)
				reserve(8); //de ez lehet akárhány
			else if (sz == space)
				reserve(2*space);
			elem[sz] = d;
			sz++;
		}
		
		double& at(int n) 
		{
			if (n < 0 || n >= sz) throw My_out_of_range();
			return elem[n];
		}
		double at(int n) const
		{
			if (n < 0 || n >= sz) throw My_out_of_range();
			return elem[n];
		}
		
}; //osztály def után ; kell
/*
My_vector fill()
{
	My_vector temp = {15.5, 16.6, 17.7};
	
	return temp;
}
*/
//My_vector glob(10);

int main()
try{
	
	vector<string> v; //standard vector
	
	My_vector v;
	
	cout << "v.capacity: " << v.capacity() << endl;
	
	v.push_back(10.5);
	cout << "v.capacity: " << v.capacity() << endl;
	v.push_back(10.5);
	v.push_back(10.5);
	v.push_back(10.5);
	v.push_back(10.5);
	v.push_back(10.5);
	v.push_back(10.5);
	v.push_back(10.5);
	cout << "v.capacity: " << v.capacity() << endl;
	v.push_back(10.5);
	cout << "v.capacity: " << v.capacity() << endl;
	v.push_back(10.5);
	v.push_back(10.5);
	v.push_back(10.5);
	v.push_back(10.5);
	v.push_back(10.5);
	v.push_back(10.5);
	cout << "v.capacity: " << v.capacity() << endl;
	v.push_back(10.5);
	cout << "v.capacity: " << v.capacity() << endl;
	v.push_back(10.5);
	
	for (int i = 0; i < v.size(); i++)
		cout << v.at(i) << endl; //v.[i] helyett .at() optimalizálás miatt

return 0;
} catch (My_out_of_range) {
	cerr << "Vector index out of range\n";
	return 1;
}