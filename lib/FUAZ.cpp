#include "HUAZ.h"

UAZ::UAZ(string name_, string location_, string calor_,
	string specification_, double speed_) : name{ name_ }, location{ location_ },
	color{ calor_ }, specification{ specification_ }, speed{ speed_ }, carcapacity(4)
{
	if (speed < 0)
	{
		throw("Speed < 0 ");
	}
}

UAZ::UAZ() : speed(0.0), name("UAZ"),
location("Ground"), color("Red"), specification("UAZ-452"), carcapacity(8)
{}

ostream& operator << (ostream& counter, UAZ& varidle_)
{
	counter << "Stat : " << endl << "name - " << varidle_.GetName()
		<< endl << "location - " << varidle_.GetLocation()
		<< endl << "Color - " << varidle_.GetCalor()
		<< endl << "Specification - " << varidle_.GetSpecification()
		<< endl << "Speed - " << varidle_.GetSpeed() << endl
		<< endl << " Car capacity - " << varidle_.carcapacity << endl;
	system("pause");
	system("cls");
	return counter;
}

istream& operator >> (istream& counter, UAZ& varidle_)
{
	cout << "Enter the car brand" << endl;
	counter >> varidle_.name;
	cout << "Enter the car color" << endl;
	counter >> varidle_.color;
	cout << "Enter the car speed" << endl;
	counter >> varidle_.speed;
	cout << "Enter the car capacity" << endl;
	counter >> varidle_.carcapacity;
	if (varidle_.speed < 0)
	{
		throw("Speed < 0 ");
	}
	if (varidle_.carcapacity < 0)
	{
		throw("Carcapacity < 0 ");
	}
	system("pause");
	system("cls");
	return counter;
}

string UAZ::GetSpecification() const
{
	return specification;
}

string UAZ::GetLocation()
{
	return location;
}

string UAZ::GetName()
{
	return name;
}

string UAZ::GetCalor()
{
	return color;
}


double UAZ::GetSpeed()
{
	return speed;
}
unsigned UAZ::GetCountOfPeople()
{
	return carcapacity;
}
