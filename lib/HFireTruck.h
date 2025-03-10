#pragma once
#include "HSpecial.h"
class FireTruck : public SpecialCar
{
public:
	FireTruck();
	FireTruck(string name_, string location_, string calor_, 
		string specification_, double speed);
	string GetName()  override;
	string GetLocation() override;
	string GetCalor() override;
	string GetSpecification() const override;
	double GetSpeed() const;
	unsigned GetCountOfPeople();
	friend istream& operator >> (istream& counter, FireTruck& varidle_);
	friend ostream& operator << (ostream& counter, FireTruck& varidle_);
protected:
	string name, location, color, specification;
	double speed;
	unsigned carcapacity;
};