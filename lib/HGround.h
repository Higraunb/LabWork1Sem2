#pragma once
#include "HTransport.h"
class TGround : public TTransport
{
public:
	TGround();
	~TGround();
	string GetName()  override;
	string GetLocation()  override;
	double GetSpeed() override;
	friend ostream& operator << (ostream& counter, TGround& varidle);
	friend istream& operator >> (istream& counter, TGround& varidle);
protected:
	string name, location;
	double speed;
};