#pragma once
#include "HPassenger.h"
class TLada :public TPassengerCar
{
public:
	TLada();
	TLada(string name_, string location_, string calor_,
		string specification_,double speed_);
	string GetName()  override;
	string GetLocation() override;
	string GetCalor() override;
	string GetSpecification() const override;
	double GetSpeed() override;
	unsigned GetCountOfPeople();
	friend istream& operator >> (istream& counter, TLada& varidle_);
	friend ostream& operator << (ostream& counter, TLada& varidle_);
protected:
	string name, location, color, specification;
	double speed;
	unsigned carcapacity;
};