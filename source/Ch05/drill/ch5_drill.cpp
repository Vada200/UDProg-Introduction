#include "std_lib_facilities.h"

int main () 
try{ 	
	//Cout << "Success!  \n";
	cout <<"Success 1 !\n";
	//cout <<"Success!\n;
	cout <<"Success 2 !\n";

	//cout << "Success" << !\n"
	cout << "Success 3 " << "!\n";
	//cout << success << endl;
	cout << "success 4 " << endl;
	//string res = 7; vector<int> v(10); v[5] = res; cout << "Success!\n"; 
	int res = 7; vector<int> v(10); v[5] = res; cout << "Success 5 !\n"; 
	//vector<int> v(10); v(5) = 7; if (v(5)!=7) cout << "Success!\n"; 
	vector<int> y(10); y[5] == 7; if (y[5]!=7) cout << "Success 6 !\n"; 
	//if (cond) cout << "Success!\n"; else cout << "Fail!\n"; 
	int i =1; if (i==1) cout << "Success 7 !\n"; else cout << "Fail!\n"; 
	//bool c =false; if (c) cout << "Success!\n"; else cout << "Fail!\n"; 
	bool c = true; if (c) cout << "Success 8 !\n"; else cout << "Fail!\n"; 
	//string s = "ape"; boo c = "fool"<s; if (c) cout << "Success!\n"; 
	string s = "ape"; c = true; if (c) cout << "Success 9 !\n"; 
	//string s = "ape"; if (s=="fool") cout << "Success!\n"; 
	s = "ape"; if (s!="fool") cout << "Success 10!\n"; 
	//string s = "ape"; if (s=="fool") cout < "Success!\n"; 
	s = "ape"; if (s == "ape") cout << "Success 11!\n"; 
	//string s = "ape"; if (s+"fool") cout < "Success!\n"; 
	s = "ape"; s +="fool"; if (s == "apefool") cout << "Success 12!\n"; 
	//vector<char> v(5); for (int i=0; 0<v.size(); ++i) ; cout << "Success!\n"; 
	vector<char> w(5); for (int i=0; i<w.size(); ++i) ; cout << "Success 13!\n"; 
	//vector<char> v(5); for (int i=0; i<=v.size(); ++i) ; cout << "Success!\n"; 
	vector<char> x(5); for (int i=0; i< x.size(); ++i) ; cout << "Success 14!\n"; 
	//string s= "Success!\n"; for (int i=0; i<6; ++i) cout << s[i]; 
	string a= "Success!\n"; for (int i=0; i<a.length(); ++i) cout << a[i]; cout <<"15\n";  
	//if (true) then cout << "Success!\n"; else cout << "Fail!\n "; 
	if (true) cout << "Success 16!\n"; else cout << "Fail!\n "; 
	//int x = 2000; char c = x; if (c==2000) cout << "Success!\n"; 
	int xx = 2000; int cc = xx; if (cc==2000) cout << "Success 17!\n"; 
	//strings = "Success!\n"; for (int i=0; i<10; ++i) cout << s[i]; 
	string ss = "Success!\n"; for (int i=0; i<ss.length(); ++i) cout << ss[i]; cout << "18\n";
	//vector v(5); for (int i=0; i<=v.size(); ++i) ; cout << "Success!\n"; 
	vector<int> vv(5); for (int i=0; i<=vv.size(); ++i) ; cout << "Success 19!\n"; 
	//int i=0; int j = 9; while (i<10) ++j; if (j<i) cout << "Success!\n"; 
	int ii=0; int j = 9; while (ii<10) ++ii; if (j<ii) cout << "Success 20!\n"; 
	//int x = 2; double d= 5/(x-2); if (d==2*x+0.5) cout << "Success!\n"; 
	int f = 7; double d = 5/(f - 2); if (d=2*f+0.5) cout << "Success 21!\n"; 
	//string<char> s = "Success!\n"; for (int i=0; i<=10; ++i) cout << s[i]; 
	string sss = "Success 22!\n"; for (int i=0; i<sss.size(); ++i) cout << sss[i]; 
	//int i=0; while (i<10) ++j; if (j<i) cout << "Success!\n"; 
	int i2=0; int j2 = 0; while (i2<10) ++i2; if (j2<i2) cout << "Success 23!\n"; 
	//	int x = 4; double d = 5/(x-2); if (d=2*x+0.5) cout << "Success!\n"; 
	int x2 = 4; double d2 = 5/(x2-2); if (d2 = x2/2+0.5) cout << "Success 24!\n"; 
	//cin << "Success!\n";
	string success; cin >> success;
	return 0;
	
}
catch (exception&e) {
	cerr << "error: " << e.what() << '\n'; //e.what() hibaüzenetet írja ki

	return 1;
}
catch (...)
{
	cerr << "Oops: unknown exception!\n";

	return 2;
}