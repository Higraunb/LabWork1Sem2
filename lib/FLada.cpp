#include "HLada.h"

Lada::Lada(string name_, string location_, string calor_,
	string specification_,double speed_): name{ name_ }, location{ location_ },
	color{ calor_ }, specification{ specification_ }, speed{speed_}, carcapacity(4)
{
	if (speed < 0)
	{
		throw("Speed < 0 ");
	}
}

Lada::Lada() : speed(0.0), name("Lada"),
location("Ground"), color("Red"), specification("Lada Granta"), carcapacity(4)
{}

ostream& operator << (ostream& counter, Lada& varidle_)
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

istream& operator >> (istream& counter, Lada& varidle_)
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

string Lada::GetSpecification() const
{
	return specification;
}

string Lada::GetLocation()
{
	return location;
}

string Lada::GetName()
{
	return name;
}

string Lada::GetCalor()
{
	return color;
}


double Lada::GetSpeed()
{
	return speed;
}
unsigned Lada::GetCountOfPeople()
{
	return carcapacity;
}
