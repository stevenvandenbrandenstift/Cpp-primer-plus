#include <iostream>
using namespace std;

int main()
{
	cout << "Give me car petrol usage (in l/100km): ";
	double usage_eur;
	cin >> usage_eur;

	const double KM_TO_MILE = 0.6214;
	const double GALLON_TO_LITER = 3.875;

	cout << "The car used " << (petrol_l/km_driven) * 100 << " l/100km" << endl;
	return 0;
}
