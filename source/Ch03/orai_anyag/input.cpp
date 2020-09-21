#include "std_lib_facilities.h"

int main ()
{

	cout << "Please enter your name and age!\n" ;
	
	string first_name, second_name;
	int age;
	cin >> first_name >>  second_name>> age;
	
	string name = first_name + ' ' + second_name;
	
	name += " Jr. ";
	
	age += 1;
	
	cout << "Hello, " << name << ", aki " << age << " éves!\n";
	
	return 0;
	
}