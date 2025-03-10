#pragma once
#include "HPlane.h"
class FighterJet : public Plane
{
public:
	FighterJet();
	FighterJet(string name_, string location_, string calor_,
		string specification_, double speed_);
	double GetFAltitude() override;
	string GetName()  override;
	string GetLocation() override;
	string GetCalor() override;
	string GetSpecification() const override;
	double GetSpeed() const;
	double GetWeight();
	double GetEngineCapacity();
	friend istream& operator >> (istream& counter, FighterJet& varidle_);
	friend ostream& operator << (ostream& counter, FighterJet& varidle_);
protected:
	string name, location, color, specification;
	double speed, FAltitude, weight, engine_capacity;
};