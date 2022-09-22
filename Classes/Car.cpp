#include "Car.h"
#include <iostream>
using namespace std;

Car::Car(string brand, string color, double cost) {
	this->brand = brand;
	this->color = color;
	this->cost = cost;
	this->mileage = 0;
	this->on = false;
}

Car::Car(string brand, string color, double cost, double mileage) {
	this->brand = brand;
	this->color = color;
	this->cost = cost;
	this->on = false;
	this->mileage = mileage;
}

bool Car::isRunning() {
	return this->on;
}

void Car::start() {
	this->on = true;
}

void Car::drive(double miles) {
	if (!this->on) {
		cout << "The car needs to start in order for it to drive.";
		return;
	}
	this->mileage += miles;
}

double Car::getMileage() {
	return this->mileage;
}

double Car::getCost() {
	return this->cost;
}

string Car::getBrand() {
	return this->brand;
}

string Car::getColor() {
	return this->color;
}