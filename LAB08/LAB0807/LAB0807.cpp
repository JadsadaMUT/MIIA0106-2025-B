#include <iostream>
using namespace std;



struct Phone {
    char home[15];
    char mobile[15];
};
struct Parent {
	string name;
	string relationship;
	Phone contact;

};

struct Student {
    string id;
    string nickname;
    string lineid;
    // TODO:
    Phone myContact;
	Parent myParent;
};

int main() {
	Student s1;

	cout << " Student Information" << endl;
	cout << "Enter student id : ";
    cin >> s1.id;
	cout << "Enter student Nickname : ";
	cin >> s1.nickname;
	cout << "Enter line ID : ";
	cin >> s1.lineid;

	cout << "Enter student Mobile number : ";
	cin >> s1.myContact.mobile;
	cout << "Enter student Home Phone number : ";
	cin >> s1.myContact.home;
	cout << "--------------------------------" << endl;

	cout << " Parent Information" << endl;
	cout << "Enter Parent Name : ";
	cin >> s1.myParent.name;
	cout << "Enter Parent Relationship : ";
	cin >> s1.myParent.relationship;
	cout << "Enter Parent Mobile number : ";
	cin >> s1.myParent.contact.mobile;
	cout << "Enter Parent Home Phone number : ";
	cin >> s1.myParent.contact.home;
	cout << "--------------------------------" << endl;
	cout << "Data Student And Parent" << endl;
	cout << "1. Student Data (Student):" << endl;
	cout << "ID : " << s1.id << endl;
	cout << "Nickname : " << s1.nickname << endl;
	cout << "Line ID : " << s1.lineid << endl;
	cout << "--------------------------------" << endl;
	cout << "2. Student's Contact Info (Student's Phone - myContact):" << endl;
	cout << "Mobile Number : " << s1.myContact.mobile << endl;
	cout << "Home Phone Number : " << s1.myContact.home << endl;
	cout << "--------------------------------" << endl;
	cout << "3. Parent Data (Parent - myParent):" << endl;
	cout << "Parent's Name : " << s1.myParent.name << endl;
	cout << "Relationship : " << s1.myParent.relationship << endl;
	cout << "--------------------------------" << endl;
	cout << "4. Parent's Contact Info (Parent's Phone - contact):" << endl;
	cout << "Parent's Mobile Number (mobile): " << s1.myParent.contact.mobile << endl;
	cout << "Parent's Home Number (home): " << s1.myParent.contact.home << endl;


	

    return 0;
}