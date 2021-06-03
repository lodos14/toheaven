/*
 ����ü�� ���δٸ� �ڷ����� ���� �� �� �ִ�
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

};

void showCar(Car &car) { // car�� �ּҸ� �����;� �Լ����� car�� main�� Car car�� �ּ� ����
	
	cout << "������ID : " << car.gamerID << endl;
	cout << "���翬�ᷮ : " << car.fuelGauge << endl;
	cout << "����ӵ� : " << car.curSpeed << endl;
}

void Accel(Car &car) {// �ڵ����� �Ǽ� �д��� ��� ������ �ϴ� �޼���

	
	if (car.fuelGauge <= 0){
		return;
	}

	else{ // ���ᰡ ����ϴٸ�
		car.fuelGauge -= FUEL_STEP;

		if (car.curSpeed + ACC_STEP > 200)
			car.curSpeed = MAX_SPEED;

		else
			car.curSpeed += ACC_STEP;

	}
}

void Break(Car &car) {// �ڵ����� �극��ũ �д��� ��� ������ �ϴ� �޼���

	

	if (car.curSpeed - BRK_STEP <= 0)
		car.curSpeed = 0;

	else
		car.curSpeed -= BRK_STEP;

}

int main() {

	Car car = { "aaa", 10, 0 };
	showCar(car);
	// �ӵ�����
	Accel(car); // ���� - &, �ӵ� - 10
	showCar(car);

	return 0;


}