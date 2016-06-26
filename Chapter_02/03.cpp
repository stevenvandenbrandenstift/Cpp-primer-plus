#include <iostream>
using namespace std;

void print_first_line();
void print_second_line();

int main()
{
	print_first_line();
	print_first_line();
	print_second_line();
	print_second_line();

	return 0;
}

void print_first_line()
{
	cout << "Three blind mice" << endl;
}

void print_second_line()
{
	cout << "See how they run" << endl;
}
