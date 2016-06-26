#include <iostream>
using namespace std;

double celsius_to_fahrenheit(double);

int main()
{
	cout << "Please enter a Celsius value: ";

	double celsius;
	cin >> celsius;

	cout << celsius << " degrees Celsius is " << celsius_to_fahrenheit(celsius)
		<< " degrees Fahrenheit." << endl;

	return 0;
}

double celsius_to_fahrenheit(double celsius)
{
	return 1.8 * celsius + 32.0;
}
