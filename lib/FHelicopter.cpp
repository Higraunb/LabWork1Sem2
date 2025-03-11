#include "HHelicopter.h"

THelicopter::THelicopter(string name_, string location_, string calor_,
	string specification_, double speed_) : name{ name_ }, location{ location_ }
	, color{ calor_ }, specification{ specification_ }, speed{ speed_ }, faltitude{ 0.0 }
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

THelicopter::THelicopter() : speed(0.0), name("Helicopter"),
location("Air"), color("Red"), specification("Mi - 26"), faltitude(0.0)
{}

THelicopter::~THelicopter()
{
}
double THelicopter::GetFAltitude()
{
	return faltitude;
}
ostream& operator << (ostream& counter, THelicopter& varidle_)
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
	if (varidle_.faltitude < 0)
	{
		throw("Speed < 0 ");
	}
	system("pause");
	system("cls");
	return counter;
}

istream& operator >> (istream& counter, THelicopter& varidle_)
{
	cout << "Enter the Helicopter brand" << endl;
	counter >> varidle_.name;
	cout << "Enter the Helicopter color" << endl;
	counter >> varidle_.color;
	cout << "Enter the Helicopter speed" << endl;
	counter >> varidle_.speed;
	cout << "Enter the Flight Alitude" << endl;
	counter >> varidle_.faltitude;
	system("pause");
	system("cls");
	return counter;
}

string THelicopter::GetLocation()
{
	return location;
}


string THelicopter::GetName()
{
	return name;
}

string THelicopter::GetCalor()
{
	return color;
}

string THelicopter::GetSpecification() const
{
	return specification;
}

double THelicopter::GetSpeed()
{
	return speed;
}