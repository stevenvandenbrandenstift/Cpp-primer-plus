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

	CandyBar* snack = new CandyBar[3];
	snack[0] = {"Mocha Munch", 2.3, 350};
	snack[1] = {"Mocha Munch 2", 3.3, 550};
	snack[2] = {"Mocha Munch 3", 4.3, 750};

	std::cout << "We present snack: " << snack[0].brand_name << std::endl;
	std::cout << "weight: " << snack[0].weight << std::endl;
	std::cout << "calories: " << snack[0].calories << std::endl;

	std::cout << "We present snack: " << snack[1].brand_name << std::endl;
	std::cout << "weight: " << snack[1].weight << std::endl;
	std::cout << "calories: " << snack[1].calories << std::endl;

	std::cout << "We present snack: " << snack[2].brand_name << std::endl;
	std::cout << "weight: " << snack[2].weight << std::endl;
	std::cout << "calories: " << snack[2].calories << std::endl;

	delete [] snack;
}
