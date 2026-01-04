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

int main() {
    const int SIZE = 5;
    Student students[SIZE]; // Array ของ struct

    // INPUT
    for (int i = 0; i < SIZE; i++) {
        cout << "=== Input Student " << (i + 1) << " ===\n";
        // TODO: cin >> students[i]...
		cout << "Enter student ID: ";
		cin >> students[i].studentID;  
		cout << "Enter nickname: ";
		cin >> students[i].nickname;
		cout << "Enter Line ID: ";
		cin >> students[i].lineID;
		cout << "Enter phone number: ";
		cin >> students[i].phoneNumber;

        cout << endl;
    }

    // OUTPUT
    cout << "\n===== Student List =====\n";
    for (int i = 0; i < SIZE; i++) {
        // TODO: cout << students[i]...
		cout << "Student " << (i + 1) << "\n";
		cout << "Student ID: " << students[i].studentID << endl;
		cout << "Nickname: " << students[i].nickname << endl;
		cout << "Line ID: " << students[i].lineID << endl;
		cout << "Phone Number: " << students[i].phoneNumber << endl;

        cout << "----------------------\n";
    }

    return 0;
}
