#pragma once
#include <string>
using namespace std;
class Car
{
private:
	string brand;
	string color;
	double cost;
	double mileage;
	bool on;

public:
	void start();
	bool isRunning();
	void drive(double miles);
	double getMileage();
	double getCost();
	string getBrand();
	string getColor();
	Car(string brand, string color, double cost);
	Car(string brand, string color, double cost, double mileage);
};

