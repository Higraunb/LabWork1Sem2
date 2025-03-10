#include "HTransport.h"
Transport::Transport()
{}
Transport::~Transport()
{}

ostream& operator << (ostream& counter, Transport& varidle)
{
	counter << "Stat : " << endl << "name - " << varidle.GetName()
		<< endl << "location - " << varidle.GetLocation() << endl
		<< "Speed - " << varidle.GetSpeed() << endl;
	system("pause");
	system("cls");
	return counter;
}

istream& operator >> (istream& counter, Transport& varidle)
{
	cout << "Enter the car brand" << endl;
	counter >> varidle.name;
	cout << "Enter the car speed" << endl;
	counter >> varidle.speed;
	if (varidle.speed < 0)
	{
		throw("Speed < 0");
	}
	system("pause");
	system("cls");
	return counter;
}