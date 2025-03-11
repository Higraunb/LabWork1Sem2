#pragma once
#include "HAir.h"
class TPlane : TAir
{
public:
	TPlane();
	TPlane(string name_, string location_, string color_, string specification_, double speed_);
	~TPlane();
	virtual double GetFAltitude() override;
	string GetName()  override;
	string GetLocation()  override;
	virtual string GetCalor();
	virtual string GetSpecification() const;
	double GetSpeed() override;
	friend istream& operator >> (istream& counter, TPlane& varidle_);
	friend ostream& operator << (ostream& counter, TPlane& varidle_);
protected:
	string name, location, color, specification;
	double speed, faltitude;
};