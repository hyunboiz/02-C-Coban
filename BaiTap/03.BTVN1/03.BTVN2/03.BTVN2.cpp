#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
#include <iomanip>
using namespace std;

// bai toan tim x

int main() {
	float numberA;
	float numberB;

	cout << "ax + b = 0 | Enter a & b to find x" << endl;
	cout << " Enter a";
	cin >> numberA;
	cout << " Enter b";
	cin >> numberB;
	float x = -numberB / numberA;
	cout << fixed << setprecision(20) << x; // lam tron den 20 so thap phan

	return 0;
}