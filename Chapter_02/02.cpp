#include <iostream>
using namespace std;

int main()
{
	cout << "Give a distance in furlongs: ";

	double furlongs;
	cin >> furlongs;

	cout << "This is equal to " << 220 * furlongs << " yards." << endl;

	return 0;
}
