/*
학생 성적 관리 프로그램
- 키보드를 통해 성적을 입력받아 처리한다.
- 학생등록, 학생삭제, 학생검색, 학생출력, 파일로드, 파일저장, 작업종료

<입력 및 출력형식>
성적 관리 프로그램
************************************************************
* [1]입력  [2]삭제  [3]검색  [4]출력  [5]로드  [6]저장  [7]종료
************************************************************
메뉴 =

== 학생등록 ==
학번 =
이름 =
국어 =
영어 =
수학 =

== 전체 학생 정보 출력 ==
학번   이름  국어   영어    수학    총점   평균   학점   등수
--------------------------------------------------------

== 학생 검색 ==
학번 =

[검색대상]
학번   이름  국어   영어    수학    총점   평균   학점   등수
--------------------------------------------------------

== 학생 삭제 ==
학번 =

[삭제대상]
학번   이름  국어   영어    수학    총점   평균   학점   등수
--------------------------------------------------------

== 전체 학생 정보 출력 ==

*/

#include<iostream>
#include<vector>
#include<algorithm>
#include<iomanip>
#include<fstream>
using namespace std;

#pragma warning(disable:4996)

// 학생 성적정보를 저장하기 위한 클래스
class Student {
private:
	int no;				// 학번
	char name[256];		// 이름
	int kor, eng, math;	// 국어, 영어, 수학점수
	int total;			// 총점
	double avg;			// 평균
	char level;			// 학점
	int grade;			// 등수

public:
	Student(int no, char* name, int kor, int eng, int math);
	Student(char* name);
	Student();
	void calculate();
	friend ostream& operator<<(ostream& os, const Student& stu);
	friend void PrintElement(Student stu);
	bool operator==(const char* key) const;
	void getStudent();

	int getNo();
};

Student::Student(int no, char* name, int kor, int eng, int math){
	this->no = no;
	strcpy(this->name, name);
	this->kor = kor;
	this->eng = eng;
	this->math = math;
	calculate();
}

Student::Student(char* name) {	
	strcpy(this->name, name);	
}

Student::Student() {
	calculate();
}

int Student::getNo() {	return no; }

void Student::calculate() {
	total = kor + eng + math;
	avg = total / 3.0;
	switch (int(avg) / 10) {
	case 10:
	case 9: level = 'A'; break;
	case 8: level = 'B'; break;
	case 7: level = 'C'; break;
	case 6: level = 'D'; break;
	default:level = 'F';
	}
	grade = 1; // 등록된 모든 학생의 등수를 1로 초기화하는 작업
}

ostream& operator<<(ostream& os, const Student& stu) {
	os << setw(4) << stu.no << setw(10) << stu.name << setw(8) << stu.kor
		<< setw(7) << stu.eng << setw(7) << stu.math << setw(9) << stu.total
		<< setw(9) << setprecision(2) << stu.avg << setw(7) << stu.level
		<< setw(7) << stu.grade;
	return os;
}

bool Student::operator==(const char* key) const {
	return strcmp(name, key) == 0;
}

void Student::getStudent() {
	cout << "학번 = ";
	cin >> no;
	cout << "이름 = ";
	cin >> name;
	cout << "국어 = ";
	cin >> kor;
	cout << "영어 = ";
	cin >> eng;
	cout << "수학 = ";
	cin >> math;
	// 버퍼에 남아있는 값을 비우는 작업
	fflush(stdin);
	calculate();
}

void PrintElement(Student stu) {
	cout << stu << endl;
}

void title() {
	cout << "학번   이름  국어   영어    수학    총점   평균   학점   등수\n";
	cout << "--------------------------------------------------------\n";
}

//char* smenu[] = { "[1]입력", "[2]삭제", "[3]검색","[4]출력", "[5]로드", "[6]저장", "[7]종료" };

char select_menu() {
	char ch;	
	cout << "\n************************************************************\n";
	//for (i = 0; i < sizeof(smenu) / sizeof(smenu[0]); i++) {
	//	cout << setw(10) << smenu[i];  // 메뉴출력
	//}
	cout << "[1]입력   [2]삭제   [3]검색   [4]출력   [5]로드   [6]저장   [7]종료";
	cout << "\n************************************************************\n";

	do {
		cout << "메뉴 = ";
		cin.get(ch);
		fflush(stdin);
	} while (ch < '1' || ch > '7');

	return ch;
}


class StudentManager {
public:
	vector<Student> v;

	void Input() {
		cout << "\n == 학생 등록 == \n";
		Student temp;
		temp.getStudent();
		v.push_back(temp);
	}

	void Display() {
		cout << "\n\t == 전체 학생 정보 출력 ==\n";
		title();
		for_each(v.begin(), v.end(), PrintElement);
	}

	void Delete() {
		//int id;
		char searchName[256];

		cout << "\n == 학생 삭제 == \n";
		cout << "삭제할 이름 = ";
		//cin >> id;
		cin >> searchName;
		fflush(stdin);

		vector<Student>::iterator iter;
		iter = find(v.begin(), v.end(), searchName);

		if (iter != v.end()) {
			cout << "[삭제대상] : " << endl;
			title();
			cout << *iter << endl;
			v.erase(iter);
			cout << "성공적으로 삭제가 완료되었습니다." << endl;
			Display();
		}
		else {
			cout << searchName << "은 존재하지 않습니다." << endl;
		}
	}

	void Search() {
		//int id;
		char searchName[256];

		cout << "\n == 학생 검색 ==\n";
		cout << "검색할 이름 = ";
		cin >> searchName;
		fflush(stdin);

		vector<Student>::iterator iter;
		iter = find(v.begin(), v.end(), searchName);

		if (iter != v.end()) {
			cout << "[검색대상] :\n";
			title();
			cout << *iter << endl;
		}
		else {
			cout << searchName << "이 존재하지 않습니다.\n";
		}
	}

	void delete_all() {
		for (int i = v.size() - 1; i > 0; i--) {
			v.erase(v.begin() + i);
		}
	}

	void Exit() {
		cout << "\n 프로그램을 종료합니다.\n";
		//delete_all();		
	}

	void Load() {
		delete_all();

		ifstream fin;

		fin.open("D:/C++_Programming/source/student.txt");

		Student temp;

		while (fin.read((char*)&temp, sizeof(temp))) {
			v.push_back(temp);
		}

		fin.close();
	}

	void Save() {
		ofstream fout;

		fout.open("D:/C++_Programming/source/student.txt");

		vector<Student>::iterator iter;

		for (iter = v.begin(); iter != v.end(); iter++) {
			Student temp = *iter;

			fout.write((char*)&temp, sizeof(temp));
		}

		fout.close();
	}
};


int main() {
	StudentManager sm;

	sm.Load();

	int ch;
	cout << "\n\t 성적 관리 프로그램 \n";
	
	while (true) {
		cout << "\n************************************************************\n";
		cout << "[1]입력   [2]삭제   [3]검색   [4]출력   [5]로드   [6]저장   [7]종료";
		cout << "\n************************************************************\n";
		cout << "메뉴 = ";
		//ch = select_menu();
		cin >> ch;

		switch (ch) {
		case 1: sm.Input(); break;
		case 2: sm.Delete(); break;
		case 3: sm.Search(); break;
		case 4: sm.Display(); break;
		case 5: sm.Load(); break;
		case 6: sm.Save(); break;
		case 7: sm.Exit(); return 0;
		}
	}

	return 0;
}