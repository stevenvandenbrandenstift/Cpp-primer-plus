#include <iostream>
using namespace std;

int main()
{
	cout << "Enter the number of seconds: ";
	long long seconds;
	cin >> seconds;

	const int SECONDS_IN_MINUTE = 60;
	const int MIN_IN_HOUR = 60;
	const int HOUR_IN_DAY = 24;

	int days = seconds / (long(SECONDS_IN_MINUTE) * MIN_IN_HOUR * HOUR_IN_DAY);
	long seconds_left = seconds % (long(SECONDS_IN_MINUTE) * MIN_IN_HOUR * HOUR_IN_DAY);
	int hours = seconds_left / (MIN_IN_HOUR * SECONDS_IN_MINUTE);
	seconds_left = seconds_left % (MIN_IN_HOUR * SECONDS_IN_MINUTE);
	int minutes = seconds_left / SECONDS_IN_MINUTE;
	seconds_left = seconds_left % SECONDS_IN_MINUTE;

	cout << seconds << " seconds = " << days << " days, " << hours << " hours, "
		<< minutes << " minutes, " << seconds_left << " seconds" << endl;

	return 0;
}
