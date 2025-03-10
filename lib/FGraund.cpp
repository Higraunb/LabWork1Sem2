#include "HGround.h"
Ground::Ground() : speed(0.0), name("Ground transport"),
location("Ground")
{}

Ground :: ~Ground()
{}

string Ground::GetLocation()
{
	return location;
}

double Ground::GetSpeed()
{
	return speed;
}

string Ground::GetName()
{
	return name;
}
