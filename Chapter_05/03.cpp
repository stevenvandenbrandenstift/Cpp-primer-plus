#include<iostream>

int
main()
{
	std::cout << "Please enter numbers (0 to end)" << std::endl;

	int number;
	int sum = 0;

	std::cin >> number;
	while(number != 0)
	{
		sum += number;
		std::cout << "The sum is now: " << sum << std::endl;
		std::cin >> number;
	}
	return 0;
}
