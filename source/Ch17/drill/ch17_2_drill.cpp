#include "std_lib_facilities.h"


int main()
{
	
	int n = 7;
	int* p1 = &n;
	
	cout << p1 << " --> " << n << endl;
	
	int* array = new int[7] {1, 2, 4, 8, 16, 32, 64};
	int* p2 = array;
	
	cout << p2 << "--> {" ;
	for (int i = 0; i < 7; i++)
		cout << array[i] << ", ";
	
	cout <<'}' << endl;
	
	int* p3 = p2;
	p1 = p2;
	//p3 = p2 //már megvolt
	
	cout <<"p1: " << p1 << " --> " << *p1 << endl;
	cout <<"p2: " << p2 << " --> " << *p2 << endl;
	
	delete p1;
	//delete p2;
	//delete p3;
	//delete[] array;
	
	
	int* array2 = new int[10] {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};
	p1 = array2;
	
	int* array3 = new int[10];
	p2 = array3;
	
	for ( int i = 0 ; i < 10; i ++) 
	{
		array3[i] = array2[i];
		cout << array3[i] << ", ";
	}
	cout << endl;
	delete p1;
	delete[] p2;
	//-------------------vectors----------------//
	
	vector<int> vector;
	
	for (int i = 0; i < 10; i++) {
		vector.push_back(pow(2,i));
	}
	p1 = &vector[0];
	
	vector<int> vector2;
	for (int i = 0; i < 10; i++) {
		vector2.push_back();
	}
return 0;
}