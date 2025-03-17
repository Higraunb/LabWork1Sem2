#include "HSpecial.h"

TSpecialCar::TSpecialCar(string name_, string location_, string calor_, 
	string specification_, double speed_): color{ calor_ }, specification{ specification_ }
{
	name = name_; 
	location = location_;
	speed = speed_;
	if (speed < 0)
	{
		throw("Speed < 0 ");
	}
}

TSpecialCar::TSpecialCar() :  color("Red"), specification("Special")
{
	name = "Special transport";
}

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

string TSpecialCar::GetCalor()
{
	return color;
}

string TSpecialCar::GetSpecification() const
{
	return specification;
}