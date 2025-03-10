#pragma once
#include <iostream>
using namespace std;
class Transport
{
public:
	Transport();
	~Transport();
	virtual string GetName() = 0;
	virtual string GetLocation() = 0;
	virtual double GetSpeed() = 0;
	friend ostream& operator << (ostream& counter, Transport& varidle);
	friend istream& operator >> (istream& counter, Transport& varidle);
protected:
	string name;
	double speed;
};