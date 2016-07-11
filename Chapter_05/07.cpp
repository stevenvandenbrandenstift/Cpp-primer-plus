#include<iostream>
#include<string>

struct car{
	std::string make;
	int year;
};

using namespace std;
int
main()
{
	int nbr_cars;
	cout << "Enter amount of cars to catalog: ";
	cin >> nbr_cars;
	cin.get();

	car * cars = new car[nbr_cars];

	for (int i = 0 ; i < nbr_cars; i++)
	{
		cout << "Car " << i+1 << endl;
		cout << "Please enter the make: ";
		getline(cin, cars[i].make);
		cout << "Please enter the year made: ";
		cin >> cars[i].year;
		cin.get();
	}
	cout << "Here is your collection:" << endl;
	for (int i = 0 ; i < nbr_cars; i++)
	{
		cout << cars[i].year << " " << cars[i].make << endl;
	}
	delete [] cars;
	return 0;
}
