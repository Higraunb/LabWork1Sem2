#include "HSpecial.h"

TSpecialCar::TSpecialCar(string name_, string location_, string calor_, 
	string specification_, double speed_): name{ name_ }, location{ location_ }
	, color{ calor_ }, specification{ specification_ }, speed{speed_}
{
	if (speed < 0)
	{
		throw("Speed < 0 ");
	}
}

TSpecialCar::TSpecialCar() : speed(0.0), name("Special transport"),
location("Ground"), color("Red"), specification("Special")
{}

TSpecialCar::~TSpecialCar()
{
}

ostream& operator << (ostream& counter, TSpecialCar& varidle_)
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

istream& operator >> (istream& counter, TSpecialCar& varidle_)
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

string TSpecialCar::GetLocation()
{
	return location;
}


string TSpecialCar::GetName()
{
	return name;
}

string TSpecialCar::GetCalor()
{
	return color;
}

string TSpecialCar::GetSpecification() const
{
	return specification;
}

double TSpecialCar::GetSpeed()
{
	return speed;
}