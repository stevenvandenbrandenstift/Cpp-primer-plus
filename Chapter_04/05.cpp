#include<string>
#include<iostream>

struct CandyBar
{
	std::string brand_name;
	double weight;
	int calories;
};

int
main(){

	CandyBar snack {"Mocha Munch", 2.3, 350};

	std::cout << "We present snack: " << snack.brand_name << std::endl;
	std::cout << "weight: " << snack.weight << std::endl;
	std::cout << "calories: " << snack.calories << std::endl;

}
