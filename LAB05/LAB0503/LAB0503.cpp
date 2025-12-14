#include <iostream>
#include <string>

using namespace std;

int callbyvalue(int a, int b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
	return 0;
}
int callbyreference(int &a, int &b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
	return 0;
}

int main()
{
	int a, b;
	cout << "Enter A integer : ";
	cin >> a;
	cout << "Enter B integer : ";
	cin >> b;

	callbyvalue(a, b);
	cout << "Before call by value use function callbyvalue A = " << a << " B = " << b << endl;

	callbyreference(a, b);
	cout << "After call by reference use function callbyreference A = " << a << " B = " << b << endl;

	return 1;
}