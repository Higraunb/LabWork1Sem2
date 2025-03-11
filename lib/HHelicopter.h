#pragma once
#pragma once
#include "HAir.h"
class THelicopter : TAir
{
public:
	THelicopter();
	THelicopter(string name_, string location_, string color_, string specification_, double speed_);
	~THelicopter();
	double GetFAltitude() override;
	string GetName()  override;
	string GetLocation()  override;
	virtual string GetCalor();
	virtual string GetSpecification() const;
	double GetSpeed() override;
	friend istream& operator >> (istream& counter, THelicopter& varidle_);
	friend ostream& operator << (ostream& counter, THelicopter& varidle_);
protected:
	string name, location, color, specification;
	double speed, faltitude;
};