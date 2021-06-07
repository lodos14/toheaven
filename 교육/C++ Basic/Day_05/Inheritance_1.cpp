/*
   객체지향적인 프로그래밍 : 클래스, 캡슐화(정보은닉), 상속
   상속, 다형성, 추상화
   상속(Inheritance) : 부모의 꺼를 자식이 물려받는 것.
   - 클래스와 클래스간의 상속을 말한다.
   - 부모클래스 or 상위클래스 or 기반클래스
   - 자녀클래스 or 하위클래스 or 파생클래스

   클래스 기능에 따라
   - Entity Class or Data Class      : 단순히 데이터만 담는 역활
   - Control Class or Handler Class  : 실제 데이터를 가지고 처리하는 용도로 사용되는 클래스
*/

#include<iostream>
#include<string>
using namespace std;

//  Entity Class : 단순히 
class Permanent {
    string name;         // 직원이름
    int salary;            // 직원급여

public:
    Permanent(string name, int money)                           /// 단순히 보여주는 것 -> Entity Class
        :salary(money), name(name) {
    }
    int getPay() const {
        return salary;
    }

    void showSalaryInfo() const {
        cout << "이름 : " << name << endl;
        cout << "급여 : " << salary << endl << endl;
    }
};

// Handler Class
class EmployeeManager {
private:
    // 객체 포인터 배열 : 동적할당.
     // 클래스명 포인터 변수 = new 클래스명(매개변수);
    Permanent* emplist[100];                                  /// Handler Class
    int empNum = 0;

public:
    EmployeeManager() : empNum(0) {}


    // 직원등록하는 메서드
    void AddEmployee(Permanent* p) {
        emplist[empNum++] = p;
    }

    // 매달 지금되는 직원의 급여의 총합을 출력하는 메서드
    void showTotalSalary() const {     // 멤버 필드를 바꾸는 것이 없기때문에.
        int sum = 0;
        for (int i = 0; i < empNum; i++)
            sum += emplist[i]->getPay();    // return

        cout << "전체 직원의 급여 = " << sum << endl;
    }

    // 모든 직원의 정보를 출력하는 메서드
    void showAllSalary() const {                 // const는 멤버(클래스멤버)에만 붙는다.
        for (int i = 0; i < empNum; i++)
            emplist[i]->showSalaryInfo();
    }

    ~EmployeeManager() {
        for (int i = 0; i < empNum; i++)
            delete emplist[i];
    }
};




int main() {
    EmployeeManager handler;
    // 직원등록
    handler.AddEmployee(new Permanent("aaa", 10000));
    handler.AddEmployee(new Permanent("bbb", 15000));
    handler.AddEmployee(new Permanent("ccc", 20000));

    // 직원급여의 총합
    handler.showTotalSalary();

    // 등록된 직원의 정보
    handler.showAllSalary();

    return 0;
}