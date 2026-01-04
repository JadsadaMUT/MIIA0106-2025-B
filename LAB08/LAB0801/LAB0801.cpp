#include <iostream>
#include <string>
using namespace std;

struct Student {
	string studentID;
	string nickname;
	string lineID;
	string phoneNumber;
};

int main() {
	Student s1; // ตัวแปรเดี่ยวของ struct

	cout << "=== Input Student 1 ===\n";
	// TODO: cin >> ...
	cout << "Enter student ID: ";
	cin >> s1.studentID;
	cout << "Enter nickname: ";
	cin >> s1.nickname;
	cout << "Enter Line ID: ";
	cin >> s1.lineID;
	cout << "Enter phone number: ";
	cin >> s1.phoneNumber;


	cout << "\n=== Output Student 1 ===\n";
	// TODO: cout << ...
	cout << "Student ID: " << s1.studentID << endl;
	cout << "Nickname: " << s1.nickname << endl;
	cout << "Line ID: " << s1.lineID << endl;
	cout << "Phone Number: " << s1.phoneNumber << endl;

	return 0;
}
