#pragma once
#pragma once
#include "HAir.h"
class Helicopter : Air
{
public:
	Helicopter();
	Helicopter(string name_, string location_, string color_, string specification_, double speed_);
	~Helicopter();
	double GetFAltitude() override;
	string GetName()  override;
	string GetLocation()  override;
	virtual string GetCalor();
	virtual string GetSpecification() const;
	double GetSpeed() override;
	friend istream& operator >> (istream& counter, Helicopter& varidle_);
	friend ostream& operator << (ostream& counter, Helicopter& varidle_);
protected:
	string name, location, color, specification;
	double speed, FAltitude;
};