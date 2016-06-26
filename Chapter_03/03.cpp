#include <iostream>
using namespace std;

int main()
{
	int degrees, minutes, seconds;
	const int MINUTES_IN_DEGREE = 60;
	const int SECONDS_IN_MINUTE = 60;

	cout << "Enter a latitude in degrees, minutes, seconds:" << endl;
	cout << "First, enter the degrees: ";
	cin >> degrees;
	cout << "Next, enter the minutes of arc: ";
	cin >> minutes;
	cout << "Finally enter the seconds of arc: ";
	cin >> seconds;

	float minutes_float = float(minutes) / MINUTES_IN_DEGREE;
	float seconds_float = (float(seconds) / SECONDS_IN_MINUTE) / MINUTES_IN_DEGREE;
	float degrees_float = degrees + minutes_float + seconds_float;

	cout << degrees << " degrees, " << minutes << " minutes, " << seconds
		<< " seconds = " << degrees_float << " degrees" << endl;
}
