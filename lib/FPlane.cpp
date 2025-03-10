#include "HPlane.h"

Plane::Plane(string name_, string location_, string calor_,
	string specification_, double speed_) : name{ name_ }, location{ location_ }
	, color{ calor_ }, specification{ specification_ }, speed{ speed_ }, FAltitude{0.0}
{
	if (speed < 0)
	{
		throw("Speed < 0 ");
	}
	if (FAltitude < 0)
	{
		throw("Speed < 0 ");
	}
}

Plane::Plane() : speed(0.0), name("Plane"),
location("Air"), color("Red"), specification("Plane"), FAltitude(0.0)
{}

Plane::~Plane()
{
}
double Plane::GetFAltitude()
{
	return FAltitude;
}
ostream& operator << (ostream& counter, Plane& varidle_)
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

istream& operator >> (istream& counter, Plane& varidle_)
{
	cout << "Enter the plane brand" << endl;
	counter >> varidle_.name;
	cout << "Enter the plane color" << endl;
	counter >> varidle_.color;
	cout << "Enter the plane speed" << endl;
	counter >> varidle_.speed;
	cout << "Enter the plane Flight Alitude" << endl;
	counter >> varidle_.FAltitude;
	if (varidle_.speed < 0)
	{
		throw("Speed < 0 ");
	}
	if (varidle_.FAltitude < 0)
	{
		throw("Speed < 0 ");
	}
	system("pause");
	system("cls");
	return counter;
}

string Plane::GetLocation()
{
	return location;
}


string Plane::GetName()
{
	return name;
}

string Plane::GetCalor()
{
	return color;
}

string Plane::GetSpecification() const
{
	return specification;
}

double Plane::GetSpeed()
{
	return speed;
}