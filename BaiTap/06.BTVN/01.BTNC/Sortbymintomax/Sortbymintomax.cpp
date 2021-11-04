#include <iostream>
#include <cmath>
using namespace std;

void arrayIn(int x, int numberArray[]) {
	for (int i = 0; i < x; i++) {
		cout << " Enter number of array " << i + 1 << endl;
		cin >> numberArray[i];
	}
}

void Sortbymintomax(int x, int numberArray[]) {
	int number = 0;
	for (int i = 0; i < x - 1; i++) {
		for (int j = i + 1; j < x; j++) {
			if (numberArray[i] > numberArray[j]) { // check điều kiện để sắp xếp
				number = numberArray[i]; // thực hiện sắp xếp
				numberArray[i] = numberArray[j];
				numberArray[j] = number;
			}
		}
	}
}
void Sortbymaxtomin(int x, int numberArray[]) {
	int number = 0;
	for (int i = 0; i < x - 1; i++) {
		for (int j = i + 1; j < x; j++) {
			if (numberArray[i] < numberArray[j]) { // check điều kiện để sắp xếp
				number = numberArray[i]; // thực hiện sắp xếp
				numberArray[i] = numberArray[j];
				numberArray[j] = number;
			}
		}
	}
}
void arrayOut(int x, int numberArray[]) {
	for (int i = 0; i < x; i++) {
		cout << numberArray[i] << "\n";
	}
}
int main() {
	int numberArray[1000];
	int x;
	cout << "Enter count number in array " << endl;
	cin >> x;
	arrayIn(x, numberArray);
	Sortbymintomax(x, numberArray);
	cout << " Array sort by min to max: " << endl;
	arrayOut(x, numberArray);
	return 0;
}