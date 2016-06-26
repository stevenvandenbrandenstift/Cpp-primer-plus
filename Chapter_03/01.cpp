#include <iostream>

using namespace std;

int main()
{
	const int INCHES_IN_FEET = 12;
	int height;
	cout << "Enter your height in inches: ___\b\b\b";
	cin >> height;

	int feet = height / INCHES_IN_FEET;
	int inches = height % INCHES_IN_FEET;

	cout << "You are " << feet << " feet and " << inches << " inches." << endl;
	return 0;
}
