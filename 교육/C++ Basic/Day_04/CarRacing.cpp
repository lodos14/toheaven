/*
 구조체안에 함수를 담을 수 있다.
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

		cout << "소유자ID : " << gamerID << endl;
		cout << "현재연료량 : " << fuelGauge << endl;
		cout << "현재속도 : " << curSpeed << endl;
	}

	void Accel() {// 자동차의 악셀 패달을 밝는 행위를 하는 메서드


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

	void Break() {// 자동차의 브레이크 패달을 밟는 행위를 하는 메서드



		if (curSpeed - BRK_STEP <= 0)
			curSpeed = 0;

		else
			curSpeed -= BRK_STEP;

	}

};


int main() {

	Car car = { "aaa", 10, 0 };
	car.showCar();
	// 속도증가
	car.Accel(); // 연료 - &, 속도 - 10
	car.showCar();

	return 0;


}