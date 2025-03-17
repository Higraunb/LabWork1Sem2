#pragma once
#include "HPlane.h"
class TFighterJet : public TPlane
{
public:
	TFighterJet();
	TFighterJet(string name_, string location_, string calor_,
		string specification_, double speed_);
	double GetWeight();
	double GetEngineCapacity();
	friend istream& operator >> (istream& counter, TFighterJet& varidle_);
	friend ostream& operator << (ostream& counter, TFighterJet& varidle_);
protected:
	double weight, engine_capacity;
};