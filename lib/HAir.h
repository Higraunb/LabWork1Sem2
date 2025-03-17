#pragma once
#include "HTransport.h"
class TAir : public TTransport
{
public:
	TAir();
	~TAir();
	virtual double GetFAltitude();
	double SetFAltitude();
	friend ostream& operator << (ostream& counter, TAir& varidle);
	friend istream& operator >> (istream& counter, TAir& varidle);
protected:
	double faltitude;
};