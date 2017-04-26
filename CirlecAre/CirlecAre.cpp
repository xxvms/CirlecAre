// CirlecAre.cpp : Defines the entry point for the console application.
//

#include <iostream>

double circaArea(double radius_);

int main()
{
	std::cout << "Please provide radius: ";
	double radius = -5.0;
	std::cin >> radius;
	
	double result = circaArea(radius);
	std::cout << "Radious value is: " << result << std::endl;

	system("pause");
    return 0;
}
double circaArea(double radius_)
{
	const double PI = 3.14159;
	double area = PI * radius_ * radius_;

	return area;
}
