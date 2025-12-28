// TODO: แสดงค่าทุกตัวใน array โดยใช้ pointer เท่านั้น
#include <iostream>
using namespace std;

int main() {
    int arr[] = { 10, 20, 30, 40 };
    int* p = arr;

    // TODO
    /*for (int i = 0; i < 4; i++) {
        cout << *(p + i) << endl;
	}*/

	/*cout << arr[0] << " ";
	cout << arr[1] << " ";
	cout << arr[2] << " ";
	cout << arr[3] << " ";*/

	cout << *(p + 0) << endl;
    cout << *(p + 1) << endl;
	cout << *(p + 2) << endl;
	cout << *(p + 3) << endl;

    return 0;
}
