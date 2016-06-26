#include <iostream>
using namespace std;

int main()
{
	cout << "Give me distance driven (in km): ";
	double km_driven;
	cin >> km_driven;
	cout << "Petrol used (in l): ";
	double petrol_l;
	cin >> petrol_l;

	cout << "The car used " << (petrol_l/km_driven) * 100 << " l/100km" << endl;
	return 0;
}
