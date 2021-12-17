#include "Captain.h"

void Captain::show()
{
	Vedgnut::show();
	cout << "Im Captain";
}

void Captain::inputProfile()
{
	Vedgnut::inputProfile();

	cout << "Enter number of exp year: ";
	getline(cin, memberPoint);
}
