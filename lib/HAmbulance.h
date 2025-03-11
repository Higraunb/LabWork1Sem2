#pragma once
#include "HSpecial.h"
class TAmbulance : public TSpecialCar
{
public:
	TAmbulance();
	TAmbulance(string name_, string location_, string calor_, 
		string specification_, double speed_);
	string GetName()  override;
	string GetLocation() override;
	string GetCalor() override;
	string GetSpecification() const override;
	double GetSpeed() const;
	unsigned GetCountOfPeople();
	friend istream& operator >> (istream& counter, TAmbulance& varidle_);
	friend ostream& operator << (ostream& counter, TAmbulance& varidle_);
protected:
	string name, location, color, specification;
	double speed;
	unsigned carcapacity;
};