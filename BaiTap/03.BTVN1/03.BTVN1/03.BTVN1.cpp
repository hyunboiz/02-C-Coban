#include <cmath>
#include <iostream>
using namespace std;

int main() {
	int numberA;
	int numberB;
	cout << " Enter 2 random number"; // nhap 2 so
	cin >> numberA;
	cin >> numberB;

	if (numberA > numberB) { // check dieu kien
		cout << numberA << " is the maxium number" << endl;
		cout << numberB << " is the minimum number" << endl;
	}
	else if(numberA < numberB) { // dieu kien nguoc
		cout << numberB << " is the maxium number" << endl;
		cout << numberA << " is the minimum number" << endl;
	}
	else {
		cout << numberA << " = " << numberB << endl;
	}
	return 0;
}