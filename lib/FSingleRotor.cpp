#include "HSingleRotor.h"

TSingleRotor::TSingleRotor(string name_, string location_, string calor_,
	string specification_, double speed_) : weight(28.5), engine_capacity(11400)
{
	color = calor_;
	specification = specification_;
	speed = speed_;
	faltitude = 100.0;
	name = name_;
	location = location_;
	if ((speed < 0) && (speed >= 270))
	{
		throw("Speed < 0 ");
	}
	if (faltitude < 0)
	{
		throw("FAltitude < 0 ");
	}
	if ((weight <= 56.5) && (weight >= 28.5))
	{
		throw("28.5 <= Weight <= 56.5 ");
	}
}

TSingleRotor::TSingleRotor() : weight(28.5), engine_capacity(11400)
{
	speed = 200.0;
	name = "Mi-26";
	specification = "SingleRotor";
	weight = 28.5;
}
ostream& operator << (ostream& counter, TSingleRotor& varidle_)
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

istream& operator >> (istream& counter, TSingleRotor& varidle_)
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
	if ((varidle_.speed < 0) && (varidle_.speed >= 270))
	{
		throw("Speed < 0 ");
	}
	if (varidle_.faltitude < 0)
	{
		throw("FAltitude < 0 ");
	}
	if ((varidle_.weight < 56.5) && (varidle_.weight >= 28.5))
	{
		throw("28.5 =< Weight < 56.5 ");
	}
	if ((varidle_.engine_capacity < 15000) && (varidle_.engine_capacity >= 11400))
	{
		throw("11400 =< Engine Capacity < 15000 ");
	}
	system("pause");
	system("cls");
	return counter;
}

double TSingleRotor::GetWeight()
{
	return weight;
}

double TSingleRotor::GetEngineCapacity()
{
	return engine_capacity;
}

