#include "HMultiScrew.h"

TMultiScrew::TMultiScrew(string name_, string location_, string calor_,
	string specification_, double speed_) : weight(2.5), engine_capacity(580)
{
	color = calor_;
	specification = specification_;
	speed = speed_;
	faltitude = 100.0;
	name = name_;
	location = location_;
	if ((speed < 0) && (speed >= 180))
	{
		throw("Speed < 0 ");
	}
	if (faltitude < 0)
	{
		throw("FAltitude < 0 ");
	}
	if ((weight <= 3) && (weight >= 2.5))
	{
		throw("2.5 <= Weight <= 3 ");
	}
}

TMultiScrew::TMultiScrew() : weight(2.5), engine_capacity(580)
{
	speed = 130.0; 
	name = "Mi-1";
	specification = "MultiScrew";
	weight = 2.5;
}
ostream& operator << (ostream& counter, TMultiScrew& varidle_)
{
	counter << "Stat : " << endl << "name - " << varidle_.GetName()
		<< endl << "location - " << varidle_.GetLocation()
		<< endl << "Color - " << varidle_.GetCalor()
		<< endl << "Specification - " << varidle_.GetSpecification()
		<< endl << "Speed - " << varidle_.GetSpeed()
		<< endl << "Flight Alitude - " << varidle_.GetFAltitude()
		<< endl << "Weigt - " << varidle_.GetWeight()
		<< endl << "Engine Capacity - " << varidle_.GetEngineCapacity() << endl;
	system("pause");
	system("cls");
	return counter;
}

istream& operator >> (istream& counter, TMultiScrew& varidle_)
{
	cout << "Enter the Helicopter brand" << endl;
	counter >> varidle_.name;
	cout << "Enter the Helicopter color" << endl;
	counter >> varidle_.color;
	cout << "Enter the Helicopter speed" << endl;
	counter >> varidle_.speed;
	cout << "Enter the Flight Alitude" << endl;
	counter >> varidle_.faltitude;
	cout << "Enter the Weight" << endl;
	counter >> varidle_.weight;
	cout << "Enter the Engine Capacity" << endl;
	counter >> varidle_.engine_capacity;
	if ((varidle_.speed < 0) && (varidle_.speed >= 180))
	{
		throw("Speed < 0 ");
	}
	if (varidle_.faltitude < 0)
	{
		throw("FAltitude < 0 ");
	}
	if ((varidle_.weight < 3) && (varidle_.weight >= 2.5))
	{
		throw("3 =< Weight < 2.5 ");
	}
	if ((varidle_.engine_capacity < 700) && (varidle_.engine_capacity >= 580))
	{
		throw("580 =< Engine Capacity < 700 ");
	}
	system("pause");
	system("cls");
	return counter;
}

double TMultiScrew::GetWeight()
{
	return weight;
}

double TMultiScrew::GetEngineCapacity()
{
	return engine_capacity;
}

