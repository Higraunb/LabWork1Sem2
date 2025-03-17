#pragma once
#include "HPlane.h"
class TCornhusker : public TPlane
{
public:
	TCornhusker();
	TCornhusker(string name_, string location_, string calor_,
		string specification_, double speed_);
	double GetWeight();
	double GetEngineCapacity();
	friend istream& operator >> (istream& counter, TCornhusker& varidle_);
	friend ostream& operator << (ostream& counter, TCornhusker& varidle_);
protected:
	double weight, engine_capacity;
};
