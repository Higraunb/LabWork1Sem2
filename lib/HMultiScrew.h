#pragma once
#include "HHelicopter.h"
class TMultiScrew : public THelicopter
{
public:
	TMultiScrew();
	TMultiScrew(string name_, string location_, string calor_,
		string specification_, double speed_);
	double GetFAltitude() override;
	string GetName()  override;
	string GetLocation() override;
	string GetCalor() override;
	string GetSpecification() const override;
	double GetSpeed() const;
	double GetWeight();
	double GetEngineCapacity();
	friend istream& operator >> (istream& counter, TMultiScrew& varidle_);
	friend ostream& operator << (ostream& counter, TMultiScrew& varidle_);
protected:
	string name, location, color, specification;
	double speed, faltitude, weight, engine_capacity;
};