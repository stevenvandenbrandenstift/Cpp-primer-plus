#include<iostream>
#include<array>

const int ArSize = 100;

int main()
{
	std::array<long double, ArSize> factorials { 1.0, 1.0 };

	for (int i = 2; i < factorials.size(); i++)
	{
		factorials[i] = i * factorials[i - 1];
	}
	for (int i = 0; i < factorials.size(); i++)
	{
		std::cout << i << "! = " << factorials[i] << std::endl;
	}
	return 0;
}
