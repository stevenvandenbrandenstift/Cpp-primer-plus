#include<iostream>
#include<array>
#include<string>

using namespace std;

int
main(){

	const string MONTHS[12] = { "januari" , "februari", "maart", "april",
			     	    "mei", "juni", "juli" , "augustus" , "september",
			     	    "oktober", "november", "december"};
	int books_sold[3][12] = {};

	for (int year = 0; year < 3; year++)
	{
		for (int month = 0; month < 12; month++)
		{
			cout << "Enter the books sold in " << MONTHS[month] << " of year " << year + 1 << ": ";
			cin >> books_sold[year][month];
		}
	}
	int sums[3] = {0, 0, 0};
	for (int year = 0; year < 3; year++)
	{
		for (int month = 0; month < 12; month++)
		{
			sums[year] += books_sold[year][month];
		}
	}
	for (int year = 0; year < 3; year++)
		cout << "There where " << sums[year] << " books sold in year " << year + 1 << endl;
	return 0;
}
