#include "HAir.h"

Air::Air() : speed(0.0), name("Air transport"),
location("Air"), FAltitude(0.0)
{}

Air::~Air()
{}


string Air::GetLocation()
{
	return location;
}

string Air::GetName()
{
	return name;
}

double Air::GetSpeed()
{
	return speed;
}

double Air::GetFAltitude()
{
	return FAltitude;
}

double Air::SetFAltitude()
{
	cin >> FAltitude;
	if (FAltitude < 0)
	{
		throw("FAltirude");
	}
}