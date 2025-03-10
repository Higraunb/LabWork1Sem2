#include "HSpecial.h"

SpecialCar::SpecialCar(string name_, string location_, string calor_, 
	string specification_, double speed_): name{ name_ }, location{ location_ }
	, color{ calor_ }, specification{ specification_ }, speed{speed_}
{
	if (speed < 0)
	{
		throw("Speed < 0 ");
	}
}

SpecialCar::SpecialCar() : speed(0.0), name("Special transport"),
location("Ground"), color("Red"), specification("Special")
{}

SpecialCar::~SpecialCar()
{
}

ostream& operator << (ostream& counter, SpecialCar& varidle_)
{
	counter << "Stat : " << endl << "name - " << varidle_.GetName()
		<< endl << "location - " << varidle_.GetLocation()
		<< endl << "Color - " << varidle_.GetCalor()
		<< endl << "Specification - " << varidle_.GetSpecification()
		<< endl << "Speed - " << varidle_.GetSpeed() << endl;
	if (varidle_.speed < 0)
	{
		throw("Speed < 0 ");
	}
	system("pause");
	system("cls");
	return counter;
}

istream& operator >> (istream& counter, SpecialCar& varidle_)
{
	cout << "Enter the car brand" << endl;
	counter >> varidle_.name;
	cout << "Enter the car color" << endl;
	counter >> varidle_.color;
	cout << "Enter the car speed" << endl;
	counter >> varidle_.speed;
	if (varidle_.speed < 0)
	{
		throw("Speed < 0 ");
	}
	system("pause");
	system("cls");
	return counter;
}

string SpecialCar::GetLocation()
{
	return location;
}


string SpecialCar::GetName()
{
	return name;
}

string SpecialCar::GetCalor()
{
	return color;
}

string SpecialCar::GetSpecification() const
{
	return specification;
}

double SpecialCar::GetSpeed()
{
	return speed;
}