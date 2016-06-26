#include <iostream>
using namespace std;

double light_years_to_astronomical_units(double);

int main()
{
	cout << "Enter the number of light years: ";

	double light_years;
	cin >> light_years;

	cout << light_years << " light years = "
		<< light_years_to_astronomical_units(light_years) << " astronomical units"
		<< endl;
}

double light_years_to_astronomical_units(double light_years)
{
	return light_years * 63240;
}
