#pragma once
#include <iostream>
using namespace std;
class TTransport
{
public:
	TTransport();
	~TTransport();
	virtual string GetName() = 0;
	virtual string GetLocation() = 0;
	virtual double GetSpeed() = 0;
};