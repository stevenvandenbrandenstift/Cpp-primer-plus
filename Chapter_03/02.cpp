#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	cout << "Give your height in feet and inches, and your weigth in pounds"
		": ___ __ ___\b\b\b\b\b\b\b\b\b\b";
	int feet, inches, weigth;
	cin >> feet;
	cin >> inches;
	cin >> weigth;

	const int INCHES_IN_FEET = 12;
	const float INCH_TO_METER = 0.0254;
	const float POUNDS_IN_KG = 2.2;

	int height = feet * INCHES_IN_FEET + inches;
	float height_m = height * INCH_TO_METER;
	float weight_kg = weigth/POUNDS_IN_KG;
	double BMI = weight_kg / sqrt(height_m);

	cout << "Your BMI is " << BMI << endl;
	return 0;
}
