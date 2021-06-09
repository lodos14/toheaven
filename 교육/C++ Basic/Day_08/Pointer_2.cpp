#include<iostream>
using namespace std;

int main() {

	char name[6] = "KOREA";
	//char* p = name; // &name[0]
	char job[8] = "STUDENT";
	//char* q = job; // &job[0]
	char address[8] = "DAEJOUN";
	//char* w = address; // &address[0]

	char people[3][8] = {"KOREA","STUDENT","DAEJOUN"};
	char* aaa[3] = {name,job,address};

	//cout << name[0] << endl;
	//cout << job << endl;
	//cout << address << endl;
	//cout << people[0][0] << endl;
	//cout << people[1][0] << endl;
	//cout << people[2][0] << endl;

	cout << *aaa[0];


	return 0;

}