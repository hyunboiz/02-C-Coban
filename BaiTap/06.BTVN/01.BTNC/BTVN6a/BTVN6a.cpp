#include <iostream>
#include <cmath>
using namespace std;

int caculator(int x) { // tinh giai thua
	int result_caculator = 1;

	for (int i = 1; i <= x; ++i) {
		result_caculator *= i;
	}
	return result_caculator;
}

int main() {
	int result = 0;
	int countNumber = 0;
	int x = 0;
	int arrayNumber[900];

	cout << " Enter count number in array:" << endl; // nhap so gia tri trong mang
	cin >> countNumber;

	for (int i = 0; i < countNumber; i++) {
		cout << " Enter number  " << i + 1 << ":" << endl;
		cin >> x;
		arrayNumber[i] = caculator(x);
		result = result + arrayNumber[i]; // tong giai thua cua 1 mang
	}
	cout << " Result:" << result << endl;

	return 0;
}