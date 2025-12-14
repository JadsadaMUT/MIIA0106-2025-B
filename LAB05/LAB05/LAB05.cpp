#include <iostream>
#include <string>
#include <cmath>

using namespace std;

double calculateArea(double radius)
{
	return 3.14159 * radius * radius;
}

int main()
{
	double radius;
	radius = 15;
	cout << "The area of a circle with radius " << radius << " is " << calculateArea(radius) << endl;
	return 1;


}