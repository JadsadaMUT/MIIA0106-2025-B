#include <iostream>	
#include <string>
using namespace std;	

int main()
{
	int score = 0;

	cout << "Enter score (0-100): ";
	if (!(cin >> score))
	{
		cout << "Invalid input" << endl;
		return 0;
	}

	if (score >= 90)
	{
		cout << "A" << endl;
	}
	else if (score >= 80)
	{
		cout << "B" << endl;
	}
	else if (score >= 70)
	{
		cout << "C" << endl;
	}
	else if (score >= 60)
	{
		cout << "D" << endl;
	}
	else if (score < 60)
	{
		cout << "F" << endl;
	}
	else
	{
		cout << "Invalid score" << endl;
	}
	return 0;
}