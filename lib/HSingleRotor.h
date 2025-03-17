#pragma once
#include "HHelicopter.h"
class TSingleRotor : public THelicopter
{
public:
	TSingleRotor();
	TSingleRotor(string name_, string location_, string calor_,
		string specification_, double speed_);
	double GetWeight();
	double GetEngineCapacity();
	friend istream& operator >> (istream& counter, TSingleRotor& varidle_);
	friend ostream& operator << (ostream& counter, TSingleRotor& varidle_);
protected:
	double weight, engine_capacity;
};