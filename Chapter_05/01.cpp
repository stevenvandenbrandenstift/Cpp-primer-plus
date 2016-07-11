#include<iostream>

using namespace std;

int
main(){

	int number_small;
	int number_big;
	double result = 0;

	cout << "Enter 2 numbers (first smallest one): " << endl;
	cin >> number_small;
	cin >> number_big;


	for (int number = number_small; number <= number_big; number++)
	{
		result += number;
	}
	cout << "The sum is " << result << endl;
	return 0;
}
