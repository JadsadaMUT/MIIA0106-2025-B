#include <iostream>
#include <string>

using namespace std;

int main()
{
	/*string name;
	cout << "Enter Your Name: ";
	cin >> name;
	cin.ignore();
	cout << "Hello " << name << ", Welcome to C++ Programming" << endl;*/


	cout << "======== For ===========" << endl;
	int i = 0;
	for ( i = 0; i <= 10; i++)
	{
		cout << "I = " << i << endl;
	}
	

	cout << "======== While ===========" << endl;
	i = 0;
	while ( i <= 10)
	{
		cout << "I = " << i << endl;
		i++;
	}

	cout << "======== Do While ===========" << endl;
	i = 0;
	do
	{
		cout << "I = " << i << endl;
		i++;
	} while (i <= 10);

	

	cout << "======== %2 ===========" << endl;
	
	for ( i = 0; i <= 20; i++)
	{
		if ( i % 2 == 0)
		{
			cout << "I = " << i << endl;
		}
		
	}

	cout << "======== End ===========" << endl;

	cout << "Sum of 1 to 100 " << endl;
	int sum = 0;
	for ( i = 1; i <= 100; i++)
	{
		sum += i;
		//cout << "Sum = " << sum << endl;
	}
	cout << "Sum = " << sum << endl;
	return 0;
}