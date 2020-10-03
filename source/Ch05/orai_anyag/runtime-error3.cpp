#include "std_lib_facilities.h"

int area (int length, int width)
{
	if ( length <= 0 || width <= 0)
		error("non_positive area() argument");
	
 return length * width;
}

int framed_area(int x, int y)
{
	constexpr int frame_width = 2;
	
	return area(x-frame_width, y-frame_width);
}

int main () 
{ 	
	int x = 2;
	int y = 4;

	int area1 = area(x,y);
	cout << "area1: " << area1 <<endl;

	int area2 = area(3,7);
	cout << "area2: " << area2 <<endl;
	int framed_area1 = framed_area(3,7);
	cout << "framed_area1: " << framed_area1 <<endl;
	
	double ratio = double (area1) /framed_area1; //arány a terület és keret között
	//double (area1) típus átalakítás
	cout << "ratio: " << ratio <<endl;
	
return 0;
}