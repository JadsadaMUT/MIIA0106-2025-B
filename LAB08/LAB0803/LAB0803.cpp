#include <iostream>
#include <string>
using namespace std;

struct Student {
    // TODO
    string studentID;
    string nickname;
    string lineID;
    string phoneNumber;
};

// TODO: เขียนฟังก์ชันนี้
void printStudent(Student s) {
    // TODO
	cout << "Student ID: " << s.studentID << endl;
	cout << "Nickname: " << s.nickname << endl;
	cout << "Line ID: " << s.lineID << endl;
	cout << "Phone Number: " << s.phoneNumber << endl;

}

int main() {
    Student s1;

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

    cout << "\n=== Output (from function) ===\n";
    // TODO: เรียก printStudent
	//cout << "Output from printStudent function:\n";
	printStudent(s1);

    return 0;
}
