#pragma once
#include "HTransport.h"
class TAir : public TTransport
{
public:
	TAir();
	~TAir();
	string GetName() override;
	string GetLocation() override;
	virtual double GetFAltitude();
	double GetSpeed() override;
	double SetFAltitude();
	friend ostream& operator << (ostream& counter, TAir& varidle);
	friend istream& operator >> (istream& counter, TAir& varidle);
protected:
	string name, location;
	double speed , faltitude;
};