#pragma once
#include "HAir.h"
class TPlane : public TAir
{
public:
	TPlane();
	TPlane(string name_, string location_, string color_, string specification_, double speed_);
	~TPlane();
	virtual string GetCalor();
	virtual string GetSpecification() const;
	friend istream& operator >> (istream& counter, TPlane& varidle_);
	friend ostream& operator << (ostream& counter, TPlane& varidle_);
protected:
	string color, specification;
};