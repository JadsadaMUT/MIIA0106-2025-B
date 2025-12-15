#include <iostream>

using namespace std;

int main()
{
	/*int i = 0;
	for (i = 10; i >= 0; i-=2)
	{
		cout << "i = " << i << endl;
	}*/

	int i = 10;
	do {
		
		cout << "i= " << i << endl;
		i -= 2;

	} while (i >= 0);

	return 0;
}