#include<iostream>

using namespace std;

int
main(){
	double investment_1 = 100;
	double investment_2 = 100;

	int years;

	double profit_1 = investment_1 * 0.10;
	for (years = 0; investment_1 >= investment_2; years++)
	{
		investment_1 += profit_1;
		investment_2 += 0.05 * investment_2;
	}
	cout << "Afther " << years << " years investment 2 is bigger then 1:" << endl;
	cout << "investment_1 = " << investment_1 << endl;
	cout << "investment_2 = " << investment_2 << endl;

	return 0;
}
