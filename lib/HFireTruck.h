#pragma once
#include "HSpecial.h"
class TFireTruck : public TSpecialCar
{
public:
	TFireTruck();
	TFireTruck(string name_, string location_, string calor_, 
		string specification_, double speed);
	string GetName()  override;
	string GetLocation() override;
	string GetCalor() override;
	string GetSpecification() const override;
	double GetSpeed() const;
	unsigned GetCountOfPeople();
	friend istream& operator >> (istream& counter, TFireTruck& varidle_);
	friend ostream& operator << (ostream& counter, TFireTruck& varidle_);
protected:
	string name, location, color, specification;
	double speed;
	unsigned carcapacity;
};