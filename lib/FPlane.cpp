#include "HPlane.h"

TPlane::TPlane(string name_, string location_, string calor_,
	string specification_, double speed_) : name{ name_ }, location{ location_ }
	, color{ calor_ }, specification{ specification_ }, speed{ speed_ }, faltitude{0.0}
{
	if (speed < 0)
	{
		throw("Speed < 0 ");
	}
	if (faltitude < 0)
	{
		throw("Speed < 0 ");
	}
}

TPlane::TPlane() : speed(0.0), name("Plane"),
location("Air"), color("Red"), specification("Plane"), faltitude(0.0)
{}

TPlane::~TPlane()
{
}
double TPlane::GetFAltitude()
{
	return faltitude;
}
ostream& operator << (ostream& counter, TPlane& varidle_)
{
	counter << "Stat : " << endl << "name - " << varidle_.GetName()
		<< endl << "location - " << varidle_.GetLocation()
		<< endl << "Color - " << varidle_.GetCalor()
		<< endl << "Specification - " << varidle_.GetSpecification()
		<< endl << "Speed - " << varidle_.GetSpeed() 
		<< endl << "Flight Alitude - " << varidle_.GetFAltitude() << endl;
	system("pause");
	system("cls");
	return counter;
}

istream& operator >> (istream& counter, TPlane& varidle_)
{
	cout << "Enter the plane brand" << endl;
	counter >> varidle_.name;
	cout << "Enter the plane color" << endl;
	counter >> varidle_.color;
	cout << "Enter the plane speed" << endl;
	counter >> varidle_.speed;
	cout << "Enter the plane Flight Alitude" << endl;
	counter >> varidle_.faltitude;
	if (varidle_.speed < 0)
	{
		throw("Speed < 0 ");
	}
	if (varidle_.faltitude < 0)
	{
		throw("Speed < 0 ");
	}
	system("pause");
	system("cls");
	return counter;
}

string TPlane::GetLocation()
{
	return location;
}


string TPlane::GetName()
{
	return name;
}

string TPlane::GetCalor()
{
	return color;
}

string TPlane::GetSpecification() const
{
	return specification;
}

double TPlane::GetSpeed()
{
	return speed;
}