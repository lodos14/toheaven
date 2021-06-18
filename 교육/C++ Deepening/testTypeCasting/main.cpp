#include<iostream>

using namespace std;

int main()
{


	int kor = 90;
	int eng = 90;
	int mat = 91;


	double average = static_cast<double>(kor + eng + mat) / 3;

	cout << "average : " << average << endl;


	int width = 9;
	int height = 5;

	double area =static_cast<double> (width * height) / 2;

	int man = 10;
	int woman = 1;
	double manRatio = static_cast<double>(man) / (man + woman) * 100;
	double womanRatio = static_cast<double>(woman) / (man + woman) * 100;


	int a = 0x12345678;
	char* p;

	//p = static_cast<char*>&a;

	p = reinterpret_cast<char*>(&a);

	cout << "*p : 0x" << hex << static_cast<int>(*p) << endl;

	return 0;
}