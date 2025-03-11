#include "HCornhusker.h"

TCornhusker::TCornhusker(string name_, string location_, string calor_,
	string specification_, double speed_) : name{ name_ }, location{ location_ },
	color{ calor_ }, specification{ specification_ }, speed{ speed_ },
	faltitude(0.0), weight(3.4), engine_capacity(1000)
{
	if ((speed < 0) && (speed >= 170))
	{
		throw("Speed < 0 ");
	}
	if (faltitude < 0)
	{
		throw("FAltitude < 0 ");
	}
	if ((weight < 5.5)&& (weight >= 3.4))
	{
		throw("3.4 < Weight < 5.5 ");
	}
}

TCornhusker::TCornhusker() : speed(130.0), name("An-2"),
location("Air"), color("Red"), specification("Cornhusker"),
weight(3.4), faltitude(0.0), engine_capacity(1000)
{}
ostream& operator << (ostream& counter, TCornhusker& varidle_)
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

istream& operator >> (istream& counter, TCornhusker& varidle_)
{
	cout << "Enter the Cornhusker brand" << endl;
	counter >> varidle_.name;
	cout << "Enter the Cornhusker color" << endl;
	counter >> varidle_.color;
	cout << "Enter the Cornhusker speed" << endl;
	counter >> varidle_.speed;
	cout << "Enter the Flight Alitude" << endl;
	counter >> varidle_.faltitude;
	cout << "Enter the Weight" << endl;
	counter >> varidle_.weight;
	cout << "Enter the Engine Capacity" << endl;
	counter >> varidle_.engine_capacity;
	if ((varidle_.speed < 0) && (varidle_.speed >= 170))
	{
		throw("Speed < 0 ");
	}
	if (varidle_.faltitude < 0)
	{
		throw("FAltitude < 0 ");
	}
	if ((varidle_.weight < 5.5) && (varidle_.weight >= 3.4))
	{
		throw("3.4 =< Weight < 5.5 ");
	}
	if ((varidle_.engine_capacity < 3000) && (varidle_.engine_capacity >= 1000))
	{
		throw("1000 =< Engine Capacity < 3000 ");
	}
	system("pause");
	system("cls");
	return counter;
}

string TCornhusker::GetSpecification() const
{
	return specification;
}

string TCornhusker::GetLocation()
{
	return location;
}

string TCornhusker::GetName()
{
	return name;
}

string TCornhusker::GetCalor()
{
	return color;
}


double TCornhusker::GetSpeed() const
{
	return speed;
}

double TCornhusker::GetFAltitude()
{
	return faltitude;
}

double TCornhusker::GetWeight()
{
	return weight;
}

double TCornhusker::GetEngineCapacity()
{
	return engine_capacity;
}

