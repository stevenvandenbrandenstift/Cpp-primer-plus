#include<iostream>
#include<array>
#include<string>

using namespace std;

int
main(){

	const array<string, 12> MONTHS { "januari" , "februari", "maart", "april",
				     	 "mei", "juni", "juli" , "augustus" , "september",
				    	 "oktober", "november", "december"};
	array<int, 12> books_sold;

	for (int i = 0; i < MONTHS.size(); i++)
	{
		cout << "Enter the books sold in " << MONTHS[i] << ": ";
		cin >> books_sold[i];
	}
	int sum = 0;
	for (int nbr : books_sold)
		sum += nbr;
	cout << "There where " << sum << " books sold this year" << endl;
	return 0;
}
