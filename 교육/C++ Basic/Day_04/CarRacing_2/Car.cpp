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

void Car::init(string id, int fuel) {// ����ʵ带 �ʱ�ȭ �ϴ� �޼���
	gamerID = id;
	fuelGauge = fuel;
	curSpeed = 0;
}

void Car::showCar() {

	cout << "������ID : " << gamerID << endl;
	cout << "���翬�ᷮ : " << fuelGauge << endl;
	cout << "����ӵ� : " << curSpeed << endl;
}

void Car::Accel() {// �ڵ����� �Ǽ� �д��� ��� ������ �ϴ� �޼���


	if (fuelGauge <= 0) {
		return;
	}

	else { // ���ᰡ ����ϴٸ�
		fuelGauge -= FUEL_STEP;

		if (curSpeed + ACC_STEP > 200)
			curSpeed = MAX_SPEED;

		else
			curSpeed += ACC_STEP;

	}
}

void Car::Break() {// �ڵ����� �극��ũ �д��� ��� ������ �ϴ� �޼���



	if (curSpeed - BRK_STEP <= 0)
		curSpeed = 0;

	else
		curSpeed -= BRK_STEP;

}


