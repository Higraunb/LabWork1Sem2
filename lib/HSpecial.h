#pragma once
#include "HGround.h"
class SpecialCar :Ground
{
public:
	SpecialCar();
	SpecialCar(string name_, string location_, string color_, string specification_, double speed_);
	~SpecialCar();
	string GetName()  override;
	string GetLocation()  override;
	virtual string GetCalor();
	virtual string GetSpecification() const;
	double GetSpeed() override;
	friend istream& operator >> (istream& counter, SpecialCar& varidle_);
	friend ostream& operator << (ostream& counter, SpecialCar& varidle_);
protected:
	string name, location, color, specification;
	double speed;
};