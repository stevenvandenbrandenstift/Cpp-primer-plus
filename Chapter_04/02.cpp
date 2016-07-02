#include<iostream>
#include<string>

using namespace std;


int
main (){

	string first_name;
	string last_name;
	char letter;
	int age;

	cout << "What is your first name? ";
	getline(cin, first_name);

	cout << "What is your last name? ";
	getline(cin, last_name);

	cout << "What letter do you deserve? ";
	cin >> letter;

	cout << "What is your age? ";
	cin >> age;

	cout << "Name: " << last_name << ", " << first_name << endl;
	cout << "Grade: " << --letter << endl;
	cout << "Age: " << age << endl;
}
