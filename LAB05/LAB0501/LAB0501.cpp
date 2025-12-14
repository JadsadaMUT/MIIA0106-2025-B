#include <iostream>
#include <string>
#include <cmath>

using namespace std;

double circleArea(double radius)
{
	return 3.14159 * radius * radius;
}

double rectArea(double width, double height)
{
	return width * height;
}

int main()
{
	double radius;
	double width;
	double height;
	cout << "Enter your value : " ;
	cin >> radius;
	
	cout << "The area of a circle with radius " << radius << " is " << circleArea(radius) << endl;


	cout << "Enter width : ";
	cin >> width;
	cout << "Enter height : ";
	cin >> height;
	
	cout << "The area of a rectangle with width " << width << " and height " << height << " is " << rectArea(width, height) << endl;

	return 1;


}