#include "HFireTruck.h"

FireTruck::FireTruck(string name_, string location_, string calor_, 
	string specification_, double speed_) : name{ name_ }, location{ location_ },
color{ calor_ }, specification{ specification_ }, speed{ speed_ }, carcapacity(8)
{
	if (speed < 0)
	{
		throw("Speed < 0 ");
	}
}

FireTruck::FireTruck() : speed(0.0), name("FireTruck"),
location("Ground"), color("Red"), specification("Ural 5557-1112-60M"), carcapacity(8)
{

}

ostream& operator << (ostream& counter, FireTruck& varidle_)
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

istream& operator >> (istream& counter, FireTruck& varidle_)
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

string FireTruck::GetSpecification() const
{
	return specification;
}

string FireTruck::GetLocation()
{
	return location;
}

string FireTruck::GetName()
{
	return name;
}

string FireTruck::GetCalor()
{
	return color;
}


double FireTruck::GetSpeed() const
{
	return speed;
}

unsigned FireTruck::GetCountOfPeople()
{
	return carcapacity;
}