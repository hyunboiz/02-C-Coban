#include <iostream>
using namespace std;
#include <string>

int main() {
	string numberA;
	cout << " Enter a number which is grater than 9" << endl;
	cin >> numberA;
	switch (numberA[0]) {

	case 1:
		cout << "Muoi";
		break;
	case 2:
		cout << "Hai muoi";
		break;
	case 3:
		cout << "Ba muoi";
		break;
	case 4:
		cout << "Bon muoi";
		break;
	case 5:
		cout << "Nam muoi";
		break;
	case 6:
		cout << "Sau muoi";
		break;
	case 7:
		cout << "Bay muoi";
		break;
	case 8:
		cout << "Tam muoi";
		break;
	case 9:
		cout << "Chin muoi";
		break;
	}
	switch (numberA[1]) {

	case 1:
		cout << " mot";
		break;
	case 2:
		cout << " hai";
		break;
	case 3:
		cout << " ba";
		break;
	case 4:
		cout << " bon";
		break;
	case 5:
		cout << " nam";
		break;
	case 6:
		cout << " sau";
		break;
	case 7:
		cout << " bay";
		break;
	case 8:
		cout << " tam";
		break;
	case 9:
		cout << " chin";
		break;
	}
	return 0;
}

