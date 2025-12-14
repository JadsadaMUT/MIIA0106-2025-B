#include <iostream>
#include <string>

using namespace std;

int maxOfThree(int a, int b, int c)
{
	int maxvalue = -1000000;
	if (a > maxvalue) {
		maxvalue = a;
	}
	if (b > maxvalue) {
		maxvalue = b;
	}
	if (c > maxvalue) {
		maxvalue = c;
	}
	return maxvalue;
}

int lowestOfThree(int a, int b, int c)
{
	int lowestvalue = 1000000;
	if (a < lowestvalue) {
		lowestvalue = a;
	}
	if (b < lowestvalue) {
		lowestvalue = b;
	}
	if (c < lowestvalue) {
		lowestvalue = c;
	}
	return lowestvalue;
}

//int minofthree(int a, int b, int c)
//{
//	if (a <= b && a <= c) {
//		return a;
//	}
//	else if (b <= a && b <= c) {
//		return b;
//	}
//	else {
//		return c;
//	}
//}

int main()
{
	int a, b, c;
	int maxvalue = -1000000;
	int lowestvalue = 1000000;

	cout << "Enter A integer : ";
	cin >> a;
	cout << "Enter B integer : ";
	cin >> b;
	cout << "Enter C integer : ";
	cin >> c;

	cout << "The largest integer is " << maxOfThree(a, b, c) << endl;
	cout << "The lowest integer is " << lowestOfThree(a, b, c) << endl;


	/*if (a > b && a > c) {
		cout << "A is the largest integer." << endl;
	}
	else if (b > a && b > c) {
		cout << "B is the largest integer." << endl;
	}
	else if (c > a && c > b) {
		cout << "C is the largest integer." << endl;
	}
	else {
		cout << "There is a tie for the largest integer." << endl;
	}*/

	return 1;

}