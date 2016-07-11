#include<iostream>
#include<cstring>

using namespace std;

int
main(){

	char word[40] = "None";

	cout << "Enter words (to stop, type the word done):" << endl;
	int i;

	for (i = 0; strcmp(word, "done"); i++)
	{
		cin >> word;
	}

	cout << "You entered a total of " << i -1 << " words." <<endl;

	return 0;
}
