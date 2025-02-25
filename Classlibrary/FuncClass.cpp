#include "HeaderClass.h"

namespace Classlibrary
{

	Transport::Transport()
	{}
	Transport::~Transport()
	{}



	void Ground::GetStat() 
	{
		cout << "Your statistics : " << endl << "name - " << name
			<< endl << "location - " << location;
	}

	string Ground::GetLocation()
	{
		return location;
	}


	string Ground::GetName() 
	{
		return name;
	}


	void Water::GetStat() 
	{
		cout << "Your statistics : " << endl << "name - " << name
			<< endl << "location - " << location;
	}

	string Water::GetLocation()
	{
		return location;
	}

	string Water::GetName() 
	{
		return name;
	}

	void Air::GetStat() 
	{
		cout << "Your statistics : " << endl << "name - " << name
			<< endl << "location - " << location;
	}
	
	string Air::GetLocation() 
	{
		return location;
	}

	string Air::GetName() 
	{
		return name;
	}

	void Space::GetStat() 
	{
		cout << "Your statistics : " << endl << "name - " << name 
			<< endl << "location - " << location;
		system("pause");
		system("cls");
	}

	string Space::GetLocation() 
	{
		return location;
	}

	string Space::GetName() 
	{
		return name;
	}

	Car::Car()
	{}

	Car::~Car()
	{}

	void Car::GetStat() 
	{
		cout << "Your statistics : " << endl << "name - " << name
			<< endl << "location - " << location;
		system("pause");
		system("cls");
	}

	string Car::GetLocation()
	{
		return location;
	}


	string Car::GetName() 
	{
		return name;
	}

	string Car::GetCalor() const
	{
		return calor;
	}

	ostream& operator << (ostream& counter, Car& varidle)
	{
		counter << "Stat : " << endl << "name - "<< varidle.GetName()
			<< endl << "location - "<<  varidle.GetLocation() 
			<< endl << "Calor - " << varidle.GetCalor() << endl;
		system("pause");
		system("cls");
		return counter;
	}

	istream& operator >> (istream& counter, Car& varidle)
	{
		cout << "Enter the car brand" << endl;
		counter >> varidle.name;
		cout << "Enter the car calor" << endl;
		counter >> varidle.calor;
		system("pause");
		system("cls");
		return counter;
	}


	Passenger::Passenger(string name_, string location_, string calor_, string specification_)
		: name{ name_ }, location{ location_ }, calor{ calor_ }, specification{specification_}
	{}

	Passenger::Passenger()
	{
	}

	Passenger::~Passenger()
	{
	}

	ostream& operator << (ostream& counter, Passenger& varidle_)
	{
		counter << "Stat : " << endl << "name - " << varidle_.GetName()
			<< endl << "location - " << varidle_.GetLocation()
			<< endl << "Calor - " << varidle_.GetCalor() 
			<< endl << "Specification - " << varidle_.GetSpecification() << endl;
		system("pause");
		system("cls");
		return counter;
	}

	istream& operator >> (istream& counter, Passenger& varidle_)
	{
		cout << "Enter the car brand" << endl;
		counter >> varidle_.name;
		cout << "Enter the car calor" << endl;
		counter >> varidle_.calor;
		system("pause");
		system("cls");
		return counter;
	}

	string Passenger::GetLocation() 
	{
		return location;
	}


	string Passenger::GetName() 
	{
		return name;
	}

	string Passenger::GetCalor()
	{
		return calor;
	}

	string Passenger::GetSpecification() const
	{
		return specification;
	}

	void Passenger::GetStat() 
	{
		cout << "Your statistics : " << endl << "name - " << name
			<< endl << "location - " << location << endl
			<< "Specification - " << specification << endl;
		system("pause");
		system("cls");
	}

	Special::Special(string name_, string location_, string calor_, string specification_)
		: name{ name_ }, location{ location_ }, calor{ calor_ }, specification{ specification_ }
	{}

	Special::Special()
	{
	}

	Special::~Special()
	{
	}

	ostream& operator << (ostream& counter, Special& varidle_)
	{
		counter << "Stat : " << endl << "name - " << varidle_.GetName()
			<< endl << "location - " << varidle_.GetLocation()
			<< endl << "Calor - " << varidle_.GetCalor()
			<< endl << "Specification - " << varidle_.GetSpecification() << endl;
		system("pause");
		system("cls");
		return counter;
	}

	istream& operator >> (istream& counter, Special& varidle_)
	{
		cout << "Enter the car brand" << endl;
		counter >> varidle_.name;
		cout << "Enter the car calor" << endl;
		counter >> varidle_.calor;
		system("pause");
		system("cls");
		return counter;
	}

	string Special::GetLocation()
	{
		return location;
	}


	string Special::GetName()
	{
		return name;
	}

	string Special::GetCalor()
	{
		return calor;
	}

	string Special::GetSpecification() const
	{
		return specification;
	}

	void Special::GetStat()
	{
		cout << "Your statistics : " << endl << "name - " << name
			<< endl << "location - " << location << endl
			<< "Specification - " << specification << endl;
		system("pause");
		system("cls");
	}

	Lada::Lada(string name_, string location_, string calor_, string specification_)
		: name{ name_ }, location{ location_ }, calor{ calor_ }, specification{ specification_ }, speed(0.0)
	{}

	ostream& operator << (ostream& counter, Lada& varidle_)
	{
		counter << "Stat : " << endl << "name - " << varidle_.GetName()
			<< endl << "location - " << varidle_.GetLocation()
			<< endl << "Calor - " << varidle_.GetCalor()
			<< endl << "Specification - " << varidle_.GetSpecification() 
			<< endl << "Speed - " << varidle_.GetSpeed() << endl;
		system("pause");
		system("cls");
		return counter;
	}

	istream& operator >> (istream& counter, Lada& varidle_)
	{
		cout << "Enter the car brand" << endl;
		counter >> varidle_.name;
		cout << "Enter the car calor" << endl;
		counter >> varidle_.calor;
		cout << "Enter the car speed" << endl;
		counter >> varidle_.speed;
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
		return calor;
	}

	void Lada::GetStat() 
	{
		cout << "Your statistics : " << endl << "name - " << name
			<< endl << "location - " << location << endl
			<< "Specification - " << specification << endl 
			<< "Speed - " << speed << endl;
		system("pause");
		system("cls");
	}

	double Lada::GetSpeed() const
	{
		return speed;
	}

	Ambulance::Ambulance(string name_, string location_, string calor_, string specification_)
		: name{ name_ }, location{ location_ }, calor{ calor_ }, specification{ specification_ }, speed(0.0)
	{}

	ostream& operator << (ostream& counter, Ambulance& varidle_)
	{
		counter << "Stat : " << endl << "name - " << varidle_.GetName()
			<< endl << "location - " << varidle_.GetLocation()
			<< endl << "Calor - " << varidle_.GetCalor()
			<< endl << "Specification - " << varidle_.GetSpecification()
			<< endl << "Speed - " << varidle_.GetSpeed() << endl;
		system("pause");
		system("cls");
		return counter;
	}

	istream& operator >> (istream& counter, Ambulance& varidle_)
	{
		cout << "Enter the car brand" << endl;
		counter >> varidle_.name;
		cout << "Enter the car calor" << endl;
		counter >> varidle_.calor;
		cout << "Enter the car speed" << endl;
		counter >> varidle_.speed;
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
		return calor;
	}

	void Ambulance::GetStat()
	{
		cout << "Your statistics : " << endl << "name - " << name
			<< endl << "location - " << location << endl
			<< "Specification - " << specification << endl
			<< "Speed - " << speed << endl;
		system("pause");
		system("cls");
	}

	double Ambulance::GetSpeed() const
	{
		return speed;
	}

}