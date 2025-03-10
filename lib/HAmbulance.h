#pragma once
#include "HSpecial.h"
class Ambulance : public SpecialCar
{
public:
	Ambulance();
	Ambulance(string name_, string location_, string calor_, 
		string specification_, double speed_);
	string GetName()  override;
	string GetLocation() override;
	string GetCalor() override;
	string GetSpecification() const override;
	double GetSpeed() const;
	unsigned GetCountOfPeople();
	friend istream& operator >> (istream& counter, Ambulance& varidle_);
	friend ostream& operator << (ostream& counter, Ambulance& varidle_);
protected:
	string name, location, color, specification;
	double speed;
	unsigned carcapacity;
};