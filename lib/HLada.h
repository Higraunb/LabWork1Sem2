#pragma once
#include "HPassenger.h"
class TLada :public TPassengerCar
{
public:
	TLada();
	TLada(string name_, string location_, string calor_,
		string specification_,double speed_);
	unsigned GetCountOfPeople();
	friend istream& operator >> (istream& counter, TLada& varidle_);
	friend ostream& operator << (ostream& counter, TLada& varidle_);
protected:
	unsigned carcapacity;
};