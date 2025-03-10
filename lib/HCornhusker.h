#pragma once
#include "HPlane.h"
class Cornhusker : public Plane
{
public:
	Cornhusker();
	Cornhusker(string name_, string location_, string calor_,
		string specification_, double speed_);
	double GetFAltitude() override;
	string GetName()  override;
	string GetLocation() override;
	string GetCalor() override;
	string GetSpecification() const override;
	double GetSpeed() const;
	double GetWeight();
	double GetEngineCapacity();
	friend istream& operator >> (istream& counter, Cornhusker& varidle_);
	friend ostream& operator << (ostream& counter, Cornhusker& varidle_);
protected:
	string name, location, color, specification;
	double speed, FAltitude, weight, engine_capacity;
};
