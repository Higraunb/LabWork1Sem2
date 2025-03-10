#include "HSingleRotor.h"

SingleRotor::SingleRotor(string name_, string location_, string calor_,
	string specification_, double speed_) : name{ name_ }, location{ location_ },
	color{ calor_ }, specification{ specification_ }, speed{ speed_ },
	FAltitude(0.0), weight(28.5), engine_capacity(11400)
{
	if ((speed < 0) && (speed >= 270))
	{
		throw("Speed < 0 ");
	}
	if (FAltitude < 0)
	{
		throw("FAltitude < 0 ");
	}
	if ((weight <= 56.5) && (weight >= 28.5))
	{
		throw("28.5 <= Weight <= 56.5 ");
	}
}

SingleRotor::SingleRotor() : speed(200.0), name("Mi-26"),
location("Air"), color("Red"), specification("SingleRotor"),
weight(28.5), FAltitude(0.0), engine_capacity(11400)
{}
ostream& operator << (ostream& counter, SingleRotor& varidle_)
{
	counter << "Stat : " << endl << "name - " << varidle_.GetName()
		<< endl << "location - " << varidle_.GetLocation()
		<< endl << "Color - " << varidle_.GetCalor()
		<< endl << "Specification - " << varidle_.GetSpecification()
		<< endl << "Speed - " << varidle_.GetSpeed()
		<< endl << "Flight Alitude - " << varidle_.GetFAltitude()
		<< endl << "Weigt - " << varidle_.GetWeight() << "t"
		<< endl << "Engine Capacity - " << varidle_.GetEngineCapacity() << endl;
	system("pause");
	system("cls");
	return counter;
}

istream& operator >> (istream& counter, SingleRotor& varidle_)
{
	cout << "Enter the Cornhusker brand" << endl;
	counter >> varidle_.name;
	cout << "Enter the Cornhusker color" << endl;
	counter >> varidle_.color;
	cout << "Enter the Cornhusker speed" << endl;
	counter >> varidle_.speed;
	cout << "Enter the Flight Alitude" << endl;
	counter >> varidle_.FAltitude;
	cout << "Enter the Weight" << endl;
	counter >> varidle_.weight;
	cout << "Enter the Engine Capacity" << endl;
	counter >> varidle_.engine_capacity;
	if ((varidle_.speed < 0) && (varidle_.speed >= 270))
	{
		throw("Speed < 0 ");
	}
	if (varidle_.FAltitude < 0)
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

string SingleRotor::GetSpecification() const
{
	return specification;
}

string SingleRotor::GetLocation()
{
	return location;
}

string SingleRotor::GetName()
{
	return name;
}

string SingleRotor::GetCalor()
{
	return color;
}


double SingleRotor::GetSpeed() const
{
	return speed;
}

double SingleRotor::GetFAltitude()
{
	return FAltitude;
}

double SingleRotor::GetWeight()
{
	return weight;
}

double SingleRotor::GetEngineCapacity()
{
	return engine_capacity;
}

