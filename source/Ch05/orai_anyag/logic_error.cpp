#include "std_lib_facilities.h"

int main()
 {
	 
	 //double min = 0; 0 ne legyen
	 double min = numeric_limits<double>::max(); //lehető legnagyobb double szám
	 //double max = 0; lehetne nulla
	 double max = numeric_limits<double>::lowest();//lehető legkisebb double szám
	 double sum = 0;
	 
	vector<double> temps;
	for(double temp; cin >> temp; )
		temps.push_back(temp);
	
	for (auto temp : temps) {
		
	if (temp > max) max = temp;
	if (temp < min) min = temp; //mivel temp < 0 sose fog teljesülni --> mindig 0 lesz
	//megoldás lehet hogy a minimum = a vektor 1. elemével (java)
	sum += temp;
		//cout << temp << endl;
	}
	
	cout << "High temperature: "<< max << endl;
	cout << "Low temperature: "<< min << endl;
	cout << "Avg temperature: "<< sum / temps.size() << endl;
	
	
	return 0;

}