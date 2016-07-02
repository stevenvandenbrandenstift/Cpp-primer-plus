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

	CandyBar snack [3] {	{"Mocha Munch", 2.3, 350},
				{"Mocha Munch 2", 4.3, 150},
				{"Mocha Munch 3", 2.4, 550}
			   };

	std::cout << "We present snack: " << snack[0].brand_name << std::endl;
	std::cout << "weight: " << snack[0].weight << std::endl;
	std::cout << "calories: " << snack[0].calories << std::endl;

	std::cout << "We present snack: " << snack[1].brand_name << std::endl;
	std::cout << "weight: " << snack[1].weight << std::endl;
	std::cout << "calories: " << snack[1].calories << std::endl;

	std::cout << "We present snack: " << snack[2].brand_name << std::endl;
	std::cout << "weight: " << snack[2].weight << std::endl;
	std::cout << "calories: " << snack[2].calories << std::endl;

}
