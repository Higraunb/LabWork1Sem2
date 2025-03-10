#pragma once
#include "HGround.h"
class PassengerCar : public Ground
{
public:
	PassengerCar();
	PassengerCar(string name_, string location_, string calor_, string specification_, double speed_);
	~PassengerCar();
	string GetName()  override;
	string GetLocation()  override;
	virtual string GetCalor();
	virtual string GetSpecification() const;
	double GetSpeed() override;
	friend istream& operator >> (istream& counter, PassengerCar& varidle_);
	friend ostream& operator << (ostream& counter, PassengerCar& varidle_);
protected:
	string name, location, color, specification;
	double speed;
};