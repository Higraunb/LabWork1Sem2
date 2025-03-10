#pragma once
#include "HTransport.h"
class Ground : public Transport
{
public:
	Ground();
	~Ground();
	string GetName()  override;
	string GetLocation()  override;
	double GetSpeed() override;
protected:
	string name, location;
	double speed;
};