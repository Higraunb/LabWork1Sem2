#pragma once
#pragma once
#include "HAir.h"
class THelicopter : public TAir
{
public:
	THelicopter();
	THelicopter(string name_, string location_, string color_, string specification_, double speed_);
	~THelicopter();
	virtual string GetCalor();
	virtual string GetSpecification() const;
	friend istream& operator >> (istream& counter, THelicopter& varidle_);
	friend ostream& operator << (ostream& counter, THelicopter& varidle_);
protected:
	string color, specification;
};