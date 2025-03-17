#include "HAir.h"

TAir::TAir() : faltitude(100.0)
{
	speed = 100.0;
	name = "Air transport";
	location = "Air";
}

TAir::~TAir()
{}

double TAir::GetFAltitude()
{
	return faltitude;
}

double TAir::SetFAltitude()
{
	cin >> faltitude;
	if (faltitude < 0)
	{
		throw("FAltirude < 0");
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
	cout << "Enter brand" << endl;
	counter >> varidle_.name;
	cout << "Enter speed" << endl;
	counter >> varidle_.speed;
	cout << "Enter Flight Alitude" << endl;
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