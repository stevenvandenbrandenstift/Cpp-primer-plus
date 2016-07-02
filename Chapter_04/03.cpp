#include<iostream>
#include<cstring>

using namespace std;


int
main (){

	char first_name[80];
	char last_name[80];
	char result[160];

	cout << "Enter your first name: ";
	cin.getline(first_name, 80);

	cout << "Enter your last name: ";
	cin.getline(last_name, 80);

	strcpy(result, last_name);
	strcat(result, ", ");
	strcat(result, first_name);

	cout << "Here is the information in a single string: "
		<< result << endl;
}
