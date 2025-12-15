#include <iostream>
#include <string>

using namespace std;

int main()
{
	int day;
	day = 2;
	switch (day)
	{
		case 1: cout << "วันจันทร์" << endl; break;
		case 2: cout << "วันอังคาร" << endl; break;
		case 3: cout << "วันพุธ" << endl; break;
		case 4: cout << "วันพฤหัสบดี" << endl; break;
		case 5: cout << "วันศุกร์" << endl; break;
		case 6: cout << "วันเสาร์" << endl; break;
		case 7: cout << "วันอาทิตย์" << endl; break;
		default: cout << "ไม่มีวันในสัปดาห์นี้" << endl; break;
	}


	return 0;	
}