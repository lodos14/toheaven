/*
 구조체는 서로다른 자료형을 같이 쓸 수 있다
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

void showCar(Car &car) { // car의 주소를 가져와야 함수안의 car가 main의 Car car와 주소 공유
	
	cout << "소유자ID : " << car.gamerID << endl;
	cout << "현재연료량 : " << car.fuelGauge << endl;
	cout << "현재속도 : " << car.curSpeed << endl;
}

void Accel(Car &car) {// 자동차의 악셀 패달을 밝는 행위를 하는 메서드

	
	if (car.fuelGauge <= 0){
		return;
	}

	else{ // 연료가 충분하다면
		car.fuelGauge -= FUEL_STEP;

		if (car.curSpeed + ACC_STEP > 200)
			car.curSpeed = MAX_SPEED;

		else
			car.curSpeed += ACC_STEP;

	}
}

void Break(Car &car) {// 자동차의 브레이크 패달을 밟는 행위를 하는 메서드

	

	if (car.curSpeed - BRK_STEP <= 0)
		car.curSpeed = 0;

	else
		car.curSpeed -= BRK_STEP;

}

int main() {

	Car car = { "aaa", 10, 0 };
	showCar(car);
	// 속도증가
	Accel(car); // 연료 - &, 속도 - 10
	showCar(car);

	return 0;


}