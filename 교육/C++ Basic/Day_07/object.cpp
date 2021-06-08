/*

	Ŭ������ ��ü
	- ���� ��� ���� ��ü��.
	- ��ü�� ĸ��ȭ �ȴ�.
	- ��������

	Ŭ����(class) : ��ü�� �𵨸��ϴ� Ʋ
	- ���������� : private, protected, public
	- ��� �ʵ� : field, attribute(�Ӽ�), state(����)
	- ��� �޼���(�Լ�) : behavior(�ൿ) or ����(action)

	TV
	����
	- on/off
	- channel
	- volume

	�ൿ
	- power on
	- power off
	- increase channel
	- decrease channel
	-

*/

#include<iostream>
using namespace std;

class TV {

private:

	bool power;
	int channel;
	int volume;

public:

	
	TV(); // ������ �޼���

	void init();

	void powerOn();

	void powerOff();

	void increaseChannel();

	void decreaseChannel();

	void increaseVolume();

	void decreaseVolume();

	void state();

};

TV::TV() {
	power = false;
	channel = 0;
	volume = 0;
}

void TV::init() {
	power = false;
	channel = 0;
	volume = 0;
}

void TV::powerOn() {
	power = true;
}

void TV::powerOff() {
	power = false;
}

void TV::increaseChannel() {

	if (power != true)
		powerOn();

	channel++;
}

void TV::decreaseChannel() {

	if (power != true)
		powerOn();
	if (channel <= 0)
		return;

	channel--;

}

void TV::increaseVolume() {
	if (power != true)
		powerOn();
	volume++;
}

void TV::decreaseVolume() {
	if (power != true)
		powerOn();

	if (volume <= 0)
		return;

	volume--;
}

void TV::state() {

	cout << "TV���� : " << power << endl;
	cout << "ä�� : " << channel << endl;
	cout << "���� : " << volume << endl;
}

int main() {

	// instance ��ü
	TV tv;  // ��ü�� �����Ǹ� �ڵ����� ������ �޼��� ȣ��

	//tv.init(); // ��ü ���� �� ���� ���� �����ϴ� �۾�
	tv.state();
	tv.decreaseChannel();
	tv.decreaseVolume();
	

	tv.powerOn();
	tv.increaseChannel();
	tv.increaseVolume();
	tv.state();


	return 0;
}