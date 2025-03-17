#pragma once
#include "HSpecial.h"
class TAmbulance : public TSpecialCar
{
public:
	TAmbulance();
	TAmbulance(string name_, string location_, string calor_, 
		string specification_, double speed_);
	unsigned GetCountOfPeople();
	friend istream& operator >> (istream& counter, TAmbulance& varidle_);
	friend ostream& operator << (ostream& counter, TAmbulance& varidle_);
protected:
	unsigned carcapacity;
};