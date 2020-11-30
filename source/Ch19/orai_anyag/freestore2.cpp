#include "std_lib_facilities.h"

double* calc(int res_size, int max)
{
	double *p = new double[max];
	double *result = new double[res_size];
	//valami
	delete[] p;
	return result;
	
}

int main()
{
	double* r = calc(200, 100); //result memória címét kapja meg az r, így  a tömböt is
	
	delete[] r;
return 0;
}