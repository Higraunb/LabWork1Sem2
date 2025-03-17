#pragma once
#include "HHelicopter.h"
class TMultiScrew : public THelicopter
{
public:
	TMultiScrew();
	TMultiScrew(string name_, string location_, string calor_,
		string specification_, double speed_);
	double GetWeight();
	double GetEngineCapacity();
	friend istream& operator >> (istream& counter, TMultiScrew& varidle_);
	friend ostream& operator << (ostream& counter, TMultiScrew& varidle_);
protected:
	
	double weight, engine_capacity;
};