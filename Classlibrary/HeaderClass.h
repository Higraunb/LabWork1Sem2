#pragma once
#include <string>
#include <iostream>
using namespace std;

namespace Classlibrary
{
	class Transport
	{
	public:
		Transport();
		~Transport();
		virtual string GetName()  = 0;
		virtual string GetLocation()  = 0;
		virtual void GetStat()  = 0;
	private:
		string name = "Transport";
	};
	class Ground : Transport
	{
	public:
		void GetStat()  override;
		string GetName()  override;
		string GetLocation()  override;
	private:
		string name = "Ground transport", location = "Ground";
	};

	class Water : Transport
	{
	public:
		void GetStat()  override;
		string GetName()  override;
		string GetLocation()  override;
	private:
		string name = "Water transport", location = "Water";
	};
	class Air : Transport
	{
	public:
		void GetStat()  override;
		string GetName() override;
		string GetLocation()  override;
	private:
		string name = "Air transport", location = "Air";
	};
	class Space : Transport
	{
	public:;
		void GetStat()  override;
		string GetName() override;
		string GetLocation() override;
	private:
		string name = "Space transport", location = "Space";
	};
	class Car : Ground
	{
	public:
		Car();
		~Car();
		void GetStat() override;
		string GetName()  override;
		string GetLocation()  override;
		string GetCalor() const ;
		friend ostream& operator << (ostream& counter, Car& varidle);
		friend istream& operator >> (istream& counter, Car& varidle);
	private:
		string name = "Car", location = Ground::GetLocation(), calor = "Rad";
	};
	class Passenger : Car
	{	
	public:
		Passenger();
		Passenger(string name_, string location_, string calor_, string specification_);
		~Passenger();
		void GetStat()  override;
		string GetName()  override;
		string GetLocation()  override;
		virtual string GetCalor() ;
		virtual string GetSpecification() const;
		friend ostream& operator << (ostream& counter, Passenger& varidle_);
		friend istream& operator >> (istream& counter, Passenger& varidle_);
	private:
		string name, location, calor, specification;
	};
	class Lada : Passenger
	{	
	public:
		Lada(string name_, string location_, string calor_, string specification_);
		void GetStat() override;
		string GetName()  override;
		string GetLocation() override;
		string GetCalor() override;
		string GetSpecification() const override;
		double GetSpeed() const;
		friend ostream& operator << (ostream& counter, Lada& varidle_);
		friend istream& operator >> (istream& counter, Lada& varidle_);
	private:
		string name, location, calor , specification ;
		double speed ;
	};
	class Special:Car
	{
	public:
		Special();
		Special(string name_, string location_, string calor_, string specification_);
		~Special();
		void GetStat()  override;
		string GetName()  override;
		string GetLocation()  override;
		virtual string GetCalor();
		virtual string GetSpecification() const;
		friend ostream& operator << (ostream& counter, Special& varidle_);
		friend istream& operator >> (istream& counter, Special& varidle_);
	private:
		string name, location, calor, specification;
	};
	class Ambulance : Special
	{
	public:
		Ambulance(string name_, string location_, string calor_, string specification_);
		void GetStat() override;
		string GetName()  override;
		string GetLocation() override;
		string GetCalor() override;
		string GetSpecification() const override;
		double GetSpeed() const;
		friend ostream& operator << (ostream& counter, Ambulance& varidle_);
		friend istream& operator >> (istream& counter, Ambulance& varidle_);
	private:
		string name, location, calor, specification;
		double speed ;
	};
}
