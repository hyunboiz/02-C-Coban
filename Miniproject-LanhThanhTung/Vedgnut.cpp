#include "Vedgnut.h"

void Vedgnut::show()
{
	cout << memberId << " " << memberName << " " << memberEmail << " "<< memberPosition << " " << memberHeight << " " << memberWeight << "\n";
}

void Vedgnut::inputProfile()
{
	cout << "Enter Id member in team: "; // get id user
	cin >> memberId;
	cin.ignore(10, '\n');

	cout << "Enter Fullname member in team: "; // get name user
	getline(cin, memberName);

	cout << "Enter Email member in team: "; // get email user
	getline(cin, memberEmail);

	cout << "Enter position member in team: "; // get name user
	getline(cin, memberPosition);

	cout << "Enter height member in team: "; // get email user
	getline(cin, memberHeight);

	cout << "Enter weight member in team: "; // get name user
	getline(cin, memberWeight);

}
string Vedgnut::getName()
{
	return memberName;
}

