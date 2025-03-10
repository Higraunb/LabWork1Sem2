#pragma once
#include "HAir.h"
class Plane : Air
{
public:
	Plane();
	Plane(string name_, string location_, string color_, string specification_, double speed_);
	~Plane();
	virtual double GetFAltitude() override;
	string GetName()  override;
	string GetLocation()  override;
	virtual string GetCalor();
	virtual string GetSpecification() const;
	double GetSpeed() override;
	friend istream& operator >> (istream& counter, Plane& varidle_);
	friend ostream& operator << (ostream& counter, Plane& varidle_);
protected:
	string name, location, color, specification;
	double speed, FAltitude;
};