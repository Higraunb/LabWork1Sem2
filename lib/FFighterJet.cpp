#include "HFighterJet.h"

TFighterJet::TFighterJet(string name_, string location_, string calor_,
	string specification_, double speed_) : name{ name_ }, location{ location_ },
	color{ calor_ }, specification{ specification_ }, speed{ speed_ },
	faltitude(0.0), weight(28.5), engine_capacity(15000)
{
	if ((speed < 0) && (speed >= 3000))
	{
		throw("Speed < 0 ");
	}
	if (faltitude < 0)
	{
		throw("FAltitude < 0 ");
	}
	if ((weight <= 30.5) && (weight >= 26.5))
	{
		throw("26.5 <= Weight <= 30.5 ");
	}
}

TFighterJet::TFighterJet() : speed(2500.0), name("Cy-57"),
location("Air"), color("Red"), specification("FighterJet"),
weight(26.5), faltitude(0.0), engine_capacity(15000)
{}
ostream& operator << (ostream& counter, TFighterJet& varidle_)
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

istream& operator >> (istream& counter, TFighterJet& varidle_)
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
	if ((varidle_.speed < 0)&& (varidle_.speed >= 3000))
	{
		throw("Speed < 0 ");
	}
	if (varidle_.faltitude < 0)
	{
		throw("FAltitude < 0 ");
	}
	if ((varidle_.weight < 30.5) && (varidle_.weight >= 26.5))
	{
		throw("26.5 =< Weight < 30.5 ");
	}
	if ((varidle_.engine_capacity < 20000) && (varidle_.engine_capacity >= 15000))
	{
		throw("15000 =< Engine Capacity < 20000 ");
	}
	system("pause");
	system("cls");
	return counter;
}

string TFighterJet::GetSpecification() const
{
	return specification;
}

string TFighterJet::GetLocation()
{
	return location;
}

string TFighterJet::GetName()
{
	return name;
}

string TFighterJet::GetCalor()
{
	return color;
}


double TFighterJet::GetSpeed() const
{
	return speed;
}

double TFighterJet::GetFAltitude()
{
	return faltitude;
}

double TFighterJet::GetWeight()
{
	return weight;
}

double TFighterJet::GetEngineCapacity()
{
	return engine_capacity;
}

