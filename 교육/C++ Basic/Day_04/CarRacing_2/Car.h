#pragma once
#include <iostream>
#include <string>
using namespace std;

class Car {
	string gamerID;
	int fuelGauge;
	int curSpeed;
	

public:

	Car(string id, int fuel);

	void init(string id, int fuel);

	void showCar();

	void Accel();

	void Break();

};
