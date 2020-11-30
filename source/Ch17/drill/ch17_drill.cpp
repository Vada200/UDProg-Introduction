#include "std_lib_facilities.h"

void print_array1(ostream& os, int* a) {
	for ( int i = 0; i < 10 ; i++)
	cout << a[i];
	cout << endl;	
}

void print_array2(ostream& os, int* a) {
	for (int i = 0; i < 10; i++) { 
		a[i] = 100 + i;
		cout << a[i] << ' ';
	}
	cout << endl;
}

void print_array3(ostream& os, int* a) {
	for (int i = 0; i < 11; i++) { 
		a[i] = 100 + i;
		cout << a[i] << ' ';
	}
	cout << endl;
}

void print_array4(ostream& os, int* a, int n) {
	for (int i = 0; i < n; i++) {
		a[i] = 100 + i;
		cout << a[i] << ' ';
	}
	cout << endl;
}
 //Vectors//
void print_vector (ostream& os, vector<int> a) {
	for (int i = 0; i < 10; i++) { 
		a.push_back(100+i);
	}
	for ( int g : a) {cout << g << " ";}
	cout << endl;
}

void print_vector2 (ostream& os, vector<int> a) {
	for (int i = 0; i < 11; i++) { 
		a.push_back(100+i);
	}
	for ( int g : a) {cout << g << " ";}
	cout << endl;
}

void print_vector3 (ostream& os, vector<int> a, int n) {
	for (int i = 0; i < n; i++) { 
		a.push_back(100+i);
	}
	for ( int g : a) {cout << g << " ";}
	cout << endl;
}



int main()
{
	//--------Arrays---------- //


	int* array1 = new int[10];
	
	cout << "Array 1 :" << endl;
	
	print_array1(cout, array1);
	
	delete[] array1;
	
	cout << "Array 2 :" << endl;
	
	print_array2(cout, array1);
	
	cout << "Array 3 :" << endl;
	
	print_array3(cout, array1);
	
	cout << "Array 4 :" << endl;
	int* array2 = new int[20];
	print_array4(cout, array2, 20);
	delete[] array1;
	delete[] array2;
	
	//----------Vectors------------//
	cout << "------------------------------------------------------------" << endl;
	vector<int> vector;
	cout << "Vector 1 :" << endl;
	
	print_vector(cout, vector);
	
	cout << "Vector 2 :" << endl;
	print_vector2(cout, vector);
	
	cout << "Vector 3 :" << endl;
	
	print_vector3(cout, vector, 20);
	
	
return 0;
}