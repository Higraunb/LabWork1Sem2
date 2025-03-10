#pragma once
#include "HTransport.h"
class Air : public Transport
{
public:
	Air();
	~Air();
	string GetName() override;
	string GetLocation() override;
	virtual double GetFAltitude();
	double GetSpeed() override;
	double SetFAltitude();
protected:
	string name, location;
	double speed , FAltitude;
};