// TODO 1) เติม field ใน class Student: id, nickname
 // TODO 2) ใช้ pointer p ชี้ไปที่ s1 
// TODO 3) กำหนดค่าโดยใช้ p-> 
// TODO 4) แสดงผลโดยใช้ p->
#include <iostream>  
#include <string>
using namespace std;
class Student
{
public: // TODO 
	string id;
	string nickname;
	string lineId;
	string phone;

};
int main()
{
	Student s1;
	Student* p = nullptr;
	// TODO: p = &s1;
	// TODO: p->id = ...;
	// TODO: p->nickname = ...;

	p = &s1;

	p->id = "6811860011";
	p->nickname = "Alice";
	p->lineId = "alice_line";
	p->phone = "0123456789";


	cout << "ID: " << /* TODO */p->id << endl;
	cout << "Nickname: " << /* TODO */p->nickname << endl;
	cout << "Line ID: " << p->lineId << endl;
	cout << "Phone: " << p->phone << endl;

	cout << "\n=== Accessing directly from s1 ===\n";

	cout << "ID: " << s1.id << endl;
	cout << "Nickname: " << s1.nickname << endl;
	cout << "Line ID: " << s1.lineId << endl;
	cout << "Phone: " << s1.phone << endl;

	return 0;
}
