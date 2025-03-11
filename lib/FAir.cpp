#include "HAir.h"

TAir::TAir() : speed(0.0), name("Air transport"),
location("Air"), faltitude(0.0)
{}

TAir::~TAir()
{}


string TAir::GetLocation()
{
	return location;
}

string TAir::GetName()
{
	return name;
}

double TAir::GetSpeed()
{
	return speed;
}

double TAir::GetFAltitude()
{
	return faltitude;
}

double TAir::SetFAltitude()
{
	cin >> faltitude;
	if (faltitude < 0)
	{
		throw("FAltirude");
	}
}
ostream& operator << (ostream& counter, TAir& varidle)
{
	counter << "Stat : " << endl << "name - " << varidle.GetName()
		<< endl << "location - " << varidle.GetLocation()
		<< endl << "Speed - " << varidle.GetSpeed()
		<< endl << "Flight Alitude - " << varidle.GetFAltitude() << endl;
	system("pause");
	system("cls");
	return counter;
}

istream& operator >> (istream& counter, TAir& varidle_)
{
	cout << "Enter the plane brand" << endl;
	counter >> varidle_.name;
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