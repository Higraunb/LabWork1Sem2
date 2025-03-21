#pragma once
#include "HGround.h"
class TPassengerCar : public TGround
{
public:
	TPassengerCar();
	TPassengerCar(string name_, string location_, string calor_, string specification_, double speed_);
	~TPassengerCar();
	virtual string GetCalor();
	virtual string GetSpecification() const;
	friend istream& operator >> (istream& counter, TPassengerCar& varidle_);
	friend ostream& operator << (ostream& counter, TPassengerCar& varidle_);
protected:
	string color, specification;
};