#include <iostream>
using namespace std;

int main() {
    int score = 50;
    int* ptr = &score;

    // TODO
	cout << "Value of score: " << score << endl;
	cout << "Value of score address : " << &score << endl;\
	cout << "Value of ptr: " << *ptr << endl;

    return 0;
}
