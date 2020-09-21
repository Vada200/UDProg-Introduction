#include "std_lib_facilities.h"

int main()
{

	cout << "Enter the name of the person you want to write to: \n";
	string first_name;
	
	cin >> first_name;
	
	cout << "Dear " << first_name <<", " << endl;
	cout << "How are you?\n";
	cout << "I'm fine. How is your day going? \n";
	cout << "It's been great, what about your? \n";
	cout << "Well, I was so busy with my studies \n";

	string friend_name;
	cout << "Enter your friend's name: ";
	cin >> friend_name;
	
	cout << "Have you seen "<< friend_name << " lately?\n";
	
	char friend_sex = 0;
	 cout << "What's your friend's gender? (m/f): " ;
	 cin >> friend_sex;
	 
	 if (friend_sex == 'm')
		 cout << "If you see " << friend_name << " please ask him to call me.\n";
	 if (friend_sex == 'f')
		 cout << "If you see " << friend_name << " please ask her to call me.\n";
	
	int age;

	cout << "I hear you just had a birthday and you are ";
	cin >> age; 
	if (age <= 0 || age >= 110) {
		cout << "(you are kidding) \n";
	}
	else 
	{
		cout << "years old. \n"; 
	}
	
	if (age < 12)
		cout << "Next year you will be "<< age + 1 << endl;
	if (age == 17)
		cout << "Next year you will be able to vote.  \n";
	if (age > 70 )
		cout << "I hope you will enjoying retirement \n";
	
	cout << "Your sincerely, \n";
	cout << " \n";
	cout << " David \n";
return 0;
}