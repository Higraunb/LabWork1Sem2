#pragma once
#include "HPassenger.h"
class TUAZ :public TPassengerCar
{
public:
	TUAZ();
	TUAZ(string name_, string location_, string calor_,
		string specification_, double speed_);
	unsigned GetCountOfPeople();
	friend istream& operator >> (istream& counter, TUAZ& varidle_);
	friend ostream& operator << (ostream& counter, TUAZ& varidle_);
protected:
	unsigned carcapacity;
};