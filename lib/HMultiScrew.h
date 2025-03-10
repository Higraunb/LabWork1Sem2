#pragma once
#include "HHelicopter.h"
class MultiScrew : public Helicopter
{
public:
	MultiScrew();
	MultiScrew(string name_, string location_, string calor_,
		string specification_, double speed_);
	double GetFAltitude() override;
	string GetName()  override;
	string GetLocation() override;
	string GetCalor() override;
	string GetSpecification() const override;
	double GetSpeed() const;
	double GetWeight();
	double GetEngineCapacity();
	friend istream& operator >> (istream& counter, MultiScrew& varidle_);
	friend ostream& operator << (ostream& counter, MultiScrew& varidle_);
protected:
	string name, location, color, specification;
	double speed, FAltitude, weight, engine_capacity;
};