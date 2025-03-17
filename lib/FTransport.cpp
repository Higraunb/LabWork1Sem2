#include "HTransport.h"
TTransport::TTransport() :name{ "Transport" },
location{ " " }, speed{ 60.0 }
{}
TTransport::~TTransport()
{}

string TTransport::GetName()
{
	return name;
}

string TTransport::GetLocation()
{
	return location;
}

double TTransport::GetSpeed()
{
	return speed;
}