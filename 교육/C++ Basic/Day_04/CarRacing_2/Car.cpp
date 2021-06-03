#include<iostream>
#include "Car.h"
#include<string>
using namespace std;

enum {
	ID_LEN = 20, MAX_SPEED = 200, FUEL_STEP = 2, ACC_STEP = 10, BRK_STEP = 10
};


Car::Car(string id, int fuel) {
	gamerID = id;
	fuelGauge = fuel;
	curSpeed = 0;

}

void Car::init(string id, int fuel) {// 멤버필드를 초기화 하는 메서드
	gamerID = id;
	fuelGauge = fuel;
	curSpeed = 0;
}

void Car::showCar() {

	cout << "소유자ID : " << gamerID << endl;
	cout << "현재연료량 : " << fuelGauge << endl;
	cout << "현재속도 : " << curSpeed << endl;
}

void Car::Accel() {// 자동차의 악셀 패달을 밝는 행위를 하는 메서드


	if (fuelGauge <= 0) {
		return;
	}

	else { // 연료가 충분하다면
		fuelGauge -= FUEL_STEP;

		if (curSpeed + ACC_STEP > 200)
			curSpeed = MAX_SPEED;

		else
			curSpeed += ACC_STEP;

	}
}

void Car::Break() {// 자동차의 브레이크 패달을 밟는 행위를 하는 메서드



	if (curSpeed - BRK_STEP <= 0)
		curSpeed = 0;

	else
		curSpeed -= BRK_STEP;

}


