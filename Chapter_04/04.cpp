#include<iostream>
#include<string>

using namespace std;


int
main (){

	string first_name;
	string last_name;
	string result;

	cout << "Enter your first name: ";
	getline(cin, first_name);

	cout << "Enter your last name: ";
	getline(cin, last_name);

	result = last_name + ", " + first_name;

	cout << "Here is the information in a single string: "
		<< result << endl;
}
