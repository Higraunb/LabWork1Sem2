#pragma once
#include "HTransport.h"
class TGround : public TTransport
{
public:
	TGround();
	TGround(TGround& val);
	~TGround();
	friend ostream& operator << (ostream& counter, TGround& varidle);
	friend istream& operator >> (istream& counter, TGround& varidle);
protected:
};