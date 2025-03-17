#pragma once
#include <iostream>
using namespace std;
class TTransport
{
public:
	TTransport();
	~TTransport();
	virtual string GetName();
	virtual string GetLocation();
	virtual double GetSpeed();
protected:
	string name, location;
	double speed;
};