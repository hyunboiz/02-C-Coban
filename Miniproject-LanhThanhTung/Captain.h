#pragma once
#include "Vedgnut.h"

class Captain : public Vedgnut 
{
private:
	string memberPoint;
public:

	Captain() {}; // Rỗng
	Captain(int id, string Fullname)
		:Vedgnut{id, Fullname}
	{}

	virtual void show();
	virtual void inputProfile();
};


