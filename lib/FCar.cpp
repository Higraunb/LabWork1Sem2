//#include "Header.h"
//
//Car::Car() : speed{0.0}
//{}
//
//Car::~Car()
//{}
//
//double Car::GetSpeed()
//{
//	return speed;
//}
//
//
//string Car::GetLocation()
//{
//	return location;
//}
//
//
//string Car::GetName()
//{
//	return name;
//}
//
//string Car::GetCalor() const
//{
//	return color;
//}
//
//ostream& operator << (ostream& counter, Car& varidle)
//{
//	counter << "Stat : " << endl << "name - " << varidle.GetName()
//		<< endl << "location - " << varidle.GetLocation()
//		<< endl << "Calor - " << varidle.GetCalor() << endl
//		<< "Speed - " << varidle.speed;
//	system("pause");
//	system("cls");
//	return counter;
//}
//
//istream& operator >> (istream& counter, Car& varidle)
//{
//	cout << "Enter the car brand" << endl;
//	counter >> varidle.name;
//	cout << "Enter the car calor" << endl;
//	counter >> varidle.color;
//	cout << "Enter the car speed" << endl;
//	counter >> varidle.speed;
//	system("pause");
//	system("cls");
//	return counter;
//}