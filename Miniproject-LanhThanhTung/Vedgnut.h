#pragma once
#include <iostream>
#include <string>
using namespace std;
class Vedgnut
{
private:
	int memberId{0};
	string memberName;
	string memberEmail;
	string memberPosition;
	string memberHeight;
	string memberWeight;
public:
		Vedgnut() {};
	Vedgnut(int id, string fullname)
		: memberId{id}, memberName{fullname}
	{}
	virtual void show();
	virtual void inputProfile();

	string getName();
};

