/*
 ����ü�ȿ� �Լ��� ���� �� �ִ�.
*/

#include<iostream>
using namespace std;

#define ID_LEN 20
#define MAX_SPEED 200
#define FUEL_STEP 2
#define ACC_STEP 10
#define BRK_STEP 10


struct Car {

	char gamerID[ID_LEN];
	int fuelGauge;
	int curSpeed;


	void showCar() { 

		cout << "������ID : " << gamerID << endl;
		cout << "���翬�ᷮ : " << fuelGauge << endl;
		cout << "����ӵ� : " << curSpeed << endl;
	}

	void Accel() {// �ڵ����� �Ǽ� �д��� ��� ������ �ϴ� �޼���


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

	void Break() {// �ڵ����� �극��ũ �д��� ��� ������ �ϴ� �޼���



		if (curSpeed - BRK_STEP <= 0)
			curSpeed = 0;

		else
			curSpeed -= BRK_STEP;

	}

};


int main() {

	Car car = { "aaa", 10, 0 };
	car.showCar();
	// �ӵ�����
	car.Accel(); // ���� - &, �ӵ� - 10
	car.showCar();

	return 0;


}