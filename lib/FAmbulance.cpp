#include "HAmbulance.h"

Ambulance::Ambulance(string name_, string location_, string calor_,
	string specification_, double speed_) : name{ name_ }, location{ location_ },
	color{ calor_ }, specification{ specification_ }, speed{ speed_ }, carcapacity(6)
{
	if (speed < 0)
	{
		throw("Speed < 0 ");
	}
}

Ambulance::Ambulance(): speed(0.0), name("Ambulance"),
location("Ground"), color("Red"), specification("MAZ 365022"), carcapacity(6)
{}
ostream& operator << (ostream& counter, Ambulance& varidle_)
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

istream& operator >> (istream& counter, Ambulance& varidle_)
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

string Ambulance::GetSpecification() const
{
	return specification;
}

string Ambulance::GetLocation()
{
	return location;
}

string Ambulance::GetName()
{
	return name;
}

string Ambulance::GetCalor()
{
	return color;
}


double Ambulance::GetSpeed() const
{
	return speed;
}

unsigned Ambulance::GetCountOfPeople()
{
	return carcapacity;
}