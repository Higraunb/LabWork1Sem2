#pragma once
#include "HSpecial.h"
class TFireTruck : public TSpecialCar
{
public:
	TFireTruck();
	TFireTruck(string name_, string location_, string calor_, 
		string specification_, double speed);
	unsigned GetCountOfPeople();
	friend istream& operator >> (istream& counter, TFireTruck& varidle_);
	friend ostream& operator << (ostream& counter, TFireTruck& varidle_);
protected:
	unsigned carcapacity;
};