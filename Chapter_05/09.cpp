#include<iostream>
#include<string>

using namespace std;

int
main(){

	string word = "None";

	cout << "Enter words (to stop, type the word done):" << endl;
	int i;

	for (i = 0; word != "done"; i++)
	{
		cin >> word;
	}

	cout << "You entered a total of " << i -1 << " words." <<endl;

	return 0;
}
