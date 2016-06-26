#include <iostream>
using namespace std;

void print_hour(int hour, int minutes);

int main()
{
	cout << "Enter the number of hours: ";

	int hour;
	cin >> hour;

	cout << "Enter the number of minutes: ";

	int minute;
	cin >> minute;

	cout << "Time: ";
	print_hour(hour, minute);
	cout << endl;

	return 0;
}

void print_hour(int hour, int minutes)
{
	cout << hour << ":" << minutes;
}
