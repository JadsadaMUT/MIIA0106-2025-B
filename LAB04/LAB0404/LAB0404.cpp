#include <iostream>
#include <string>

using namespace std;

int main()
{
	
	int i = 0;
	/*
	for ( i = 0; i < 10; i++)
	{
		cout << "i = " << i << endl;
	}
	cout << "stop" << endl;
	*/

	//while
	i = 12;
	cout << "Start While" << endl;
	while (i <= 10)
	{
		cout << "i = " << i << endl;
		i += 2;
	}
	cout << "Stop While" << endl;

		
	cout << "Start Do While" << endl;
	i = 12;
	do
	{
		cout << "i = " << i << endl;
		i+= 1;
	} while (i < 11);
	cout << "Stop Do While" << endl;

	cout << "===== Break =====" << endl;

	for (i = 0; i < 10; i++)
	{
		cout << "i = " << i << endl;
		if (i == 5)
		{
			cout << "Break at i = " << i << endl;
			break;
		}
		
	}
	cout << "===== Stop Break =====" << endl;


	int j;
	int k = 30;
	do
	{
		cout << "Enter number : " ;
		cin >> j;

		if (j == k)
		{
			cout << "Exit Loop" << endl;
			break;
		}
		
	} while (true);


	cout << "===== Continue =====" << endl;
	for (i = 0; i < 10; i++)
	{
		if (i == 2)
		{
			continue;
			
			cout << "This line will never execute" << endl;
			cout << "This line will never execute" << endl;
			cout << "This line will never execute" << endl;
		}
		cout << "i = " << i << endl;
	}


	return 0;
}