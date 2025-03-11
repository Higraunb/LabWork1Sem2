#include "HPassenger.h"

TPassengerCar::TPassengerCar(string name_, string location_, string calor_,
	string specification_, double speed_): name{ name_ }, location{ location_ },
	color{ calor_ }, specification{ specification_ }, speed{speed_}
{
	if (speed < 0)
	{
		throw("Speed < 0 ");
	}
}

TPassengerCar::TPassengerCar() : speed(0.0), name("Passenger transport"),
location("Ground"), color("Red"), specification("Passenger")
{
}

TPassengerCar::~TPassengerCar()
{
}

ostream& operator << (ostream& counter, TPassengerCar& varidle_)
{
	counter << "Stat : " << endl << "name - " << varidle_.GetName()
		<< endl << "location - " << varidle_.GetLocation()
		<< endl << "Color - " << varidle_.GetCalor()
		<< endl << "Specification - " << varidle_.GetSpecification()
		<< endl << "Speed - " << varidle_.GetSpeed() << endl;
	system("pause");
	system("cls");
	return counter;
}

istream& operator >> (istream& counter, TPassengerCar& varidle_)
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

string TPassengerCar::GetLocation()
{
	return location;
}


string TPassengerCar::GetName()
{
	return name;
}

string TPassengerCar::GetCalor()
{
	return color;
}

string TPassengerCar::GetSpecification() const
{
	return specification;
}


double TPassengerCar::GetSpeed()
{
	return speed;
}