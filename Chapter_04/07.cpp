#include<iostream>
#include<string>

struct Pizza
{
	std::string company;
	double diameter;
	double weight;
};

using namespace std;
int main()
{
	Pizza pizza;

	cout << "Enter pizza company: ";
	getline(cin, pizza.company);
	cout << "Give pizza diameter: ";
	cin >> pizza.diameter;
	cout << "Give pizza weight: ";
	cin >> pizza.weight;

	cout << "We present pizza from " << pizza.company << ": " << endl;
	cout << "Diameter: " << pizza.diameter << endl;
	cout << "Weight: " << pizza.weight << endl;

}
