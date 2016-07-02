#include<iostream>

using namespace std;


int
main (){

	char first_name[80];
	char last_name[80];
	char letter;
	int age;

	cout << "What is your first name? ";
	cin.getline(first_name, 80);

	cout << "What is your last name? ";
	cin.getline(last_name, 80);

	cout << "What letter do you deserve? ";
	cin >> letter;

	cout << "What is your age? ";
	cin >> age;

	cout << "Name: " << last_name << ", " << first_name << endl;
	cout << "Grade: " << --letter << endl;
	cout << "Age: " << age << endl;
}
