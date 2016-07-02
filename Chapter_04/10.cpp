#include<iostream>

using namespace std;
int
main(){

	double* array = new double[3];

	cout << "enter 3 40m dash times: ";
	cin >> array[0];
	cin >> array[1];
	cin >> array[2];
	cout << "You entered this: " << array[0] << " " << array[1] << " " << array[2] << endl;
	cout << "your average is " << (array[0] + array[1] + array[2])/3 << endl;

	delete [] array;
}
