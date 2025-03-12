#pragma once
#include "HGround.h"
class TSpecialCar : public TGround
{
public:
	TSpecialCar();
	TSpecialCar(string name_, string location_, string color_, string specification_, double speed_);
	~TSpecialCar();
	string GetName()  override;
	string GetLocation()  override;
	virtual string GetCalor();
	virtual string GetSpecification() const;
	double GetSpeed() override;
	friend istream& operator >> (istream& counter, TSpecialCar& varidle_);
	friend ostream& operator << (ostream& counter, TSpecialCar& varidle_);
protected:
	string name, location, color, specification;
	double speed;
};