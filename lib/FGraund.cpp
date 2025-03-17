#include "HGround.h"
TGround::TGround()
{
	name = "Ground Transport";
	location = "Ground";
}

TGround::TGround(TGround& val)
{
	speed = val.speed;
	name = val.name;
	location = val.location;
}

TGround :: ~TGround()
{}

ostream& operator << (ostream& counter, TGround& varidle)
{
	counter << "Stat : " << endl << "name - " << varidle.GetName()
		<< endl << "location - " << varidle.GetLocation()
		<< endl << "Speed - " << varidle.GetSpeed() << endl;
	system("pause");
	system("cls");
	return counter;
}

istream& operator >> (istream& counter, TGround& varidle_)
{
	cout << "Enter brand" << endl;
	counter >> varidle_.name;
	cout << "Enter speed" << endl;
	counter >> varidle_.speed;
	if (varidle_.speed < 0)
	{
		throw("Speed < 0 ");
	}
	system("pause");
	system("cls");
	return counter;
}
