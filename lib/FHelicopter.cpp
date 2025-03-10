#include "HHelicopter.h"

Helicopter::Helicopter(string name_, string location_, string calor_,
	string specification_, double speed_) : name{ name_ }, location{ location_ }
	, color{ calor_ }, specification{ specification_ }, speed{ speed_ }, FAltitude{ 0.0 }
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

Helicopter::Helicopter() : speed(0.0), name("Helicopter"),
location("Air"), color("Red"), specification("Mi - 26"), FAltitude(0.0)
{}

Helicopter::~Helicopter()
{
}
double Helicopter::GetFAltitude()
{
	return FAltitude;
}
ostream& operator << (ostream& counter, Helicopter& varidle_)
{
	counter << "Stat : " << endl << "name - " << varidle_.GetName()
		<< endl << "location - " << varidle_.GetLocation()
		<< endl << "Color - " << varidle_.GetCalor()
		<< endl << "Specification - " << varidle_.GetSpecification()
		<< endl << "Speed - " << varidle_.GetSpeed()
		<< endl << "Flight Alitude - " << varidle_.GetFAltitude() << endl;
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

istream& operator >> (istream& counter, Helicopter& varidle_)
{
	cout << "Enter the Helicopter brand" << endl;
	counter >> varidle_.name;
	cout << "Enter the Helicopter color" << endl;
	counter >> varidle_.color;
	cout << "Enter the Helicopter speed" << endl;
	counter >> varidle_.speed;
	cout << "Enter the Flight Alitude" << endl;
	counter >> varidle_.FAltitude;
	system("pause");
	system("cls");
	return counter;
}

string Helicopter::GetLocation()
{
	return location;
}


string Helicopter::GetName()
{
	return name;
}

string Helicopter::GetCalor()
{
	return color;
}

string Helicopter::GetSpecification() const
{
	return specification;
}

double Helicopter::GetSpeed()
{
	return speed;
}