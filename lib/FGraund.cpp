#include "HGround.h"
TGround::TGround() : speed(0.0), name("Ground transport"),
location("Ground")
{}

TGround :: ~TGround()
{}

string TGround::GetLocation()
{
	return location;
}

double TGround::GetSpeed()
{
	return speed;
}

string TGround::GetName()
{
	return name;
}

ostream& operator << (ostream& counter, TGround& varidle)
{
	counter << "Stat : " << endl << "name - " << varidle.GetName()
		<< endl << "location - " << varidle.GetLocation()
		<< endl << "Speed - " << varidle.GetSpeed();
	system("pause");
	system("cls");
	return counter;
}

istream& operator >> (istream& counter, TGround& varidle_)
{
	cout << "Enter the plane brand" << endl;
	counter >> varidle_.name;
	cout << "Enter the plane speed" << endl;
	counter >> varidle_.speed;
	if (varidle_.speed < 0)
	{
		throw("Speed < 0 ");
	}
	system("pause");
	system("cls");
	return counter;
}
