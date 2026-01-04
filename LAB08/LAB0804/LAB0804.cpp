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

// TODO: swap เขียนเอง
void swapStudent(Student& a, Student& b) {
    // TODO
	Student temp = a;
	a = b;
	b = temp;
}

// TODO: sort เขียนเอง (Bubble sort)
void sortByID(Student students[], int size) {
    // TODO
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (students[j].studentID > students[j + 1].studentID) {
                swapStudent(students[j], students[j + 1]);
            }
        }
	}
}

void printStudents(Student students[], int size) {
    for (int i = 0; i < size; i++) {
        // TODO: cout << students[i]...
		cout << "Student " << (i + 1) << "\n";
		cout << "Student ID: " << students[i].studentID << endl;
		cout << "Nickname: " << students[i].nickname << endl;
		cout << "Line ID: " << students[i].lineID << endl;
		cout << "Phone Number: " << students[i].phoneNumber << endl;

        cout << "----------------------\n";
    }
}
int main() {
    const int SIZE = 5;
    Student students[SIZE];

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
        cin >> students[i].phoneNumber;;

        cout << endl;
    }
    sortByID(students, SIZE);
    cout << "\n===== Student List (Sorted by ID) =====\n";
    printStudents(students, SIZE);

    return 0;
}
