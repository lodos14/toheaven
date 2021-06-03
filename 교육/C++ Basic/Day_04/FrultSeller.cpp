/*

 ��ü => Ŭ���� : ����������, ����ʵ�, ����޼���
        - ��Ȱ�� : ����Ʈ������ ���� => ����Ʈ���� ����
        - ���¼ҽ�

 Ŭ���� : ����ʵ� - ��ü�� Ư��(or �Ӽ�)
          ����޼��� - ��ü�� ������ �ൿ
          ���������� - pricate, protected, public

 "���� ���������� 2000�� ��ġ�� ����� �����ߴ�."
 ��ü : ��, ������, ���(IOT - �繰���ͳ�)
 �� => ����ʵ�(��, ������ ���), ����޼���(����� ����)
 ������ => ����ʵ�(�Ǹ��� ���,�������), ����޼���(�Ǹ�)

*/
#include<iostream>
using namespace std;

class AppleSeller {
    // ����ʵ�
    int apples;
    int price;
    int sales;   // ����ݾ�

public:
    void init(int apple, int money) {
        apples = apple;
        price = money;
        sales = 0;
    }

    int appleSales(int money) {

        int apple = money / price;
        apples -= apple;
        sales += money;
        return apple;
    }

    void salesResult() {

        cout << "���� ����� : " << apples << endl;
        cout << "����ݾ� : " << sales << endl;

    }

};
class AppleBuyer {
    // ����ʵ� - �Ӽ� or ����
    int money;
    int numOfApple;

public: // ����޼��� -���� or �ൿ

    void init(int money) {
        this->money = money;
        numOfApple = 0;

    }

    void buy(AppleSeller& seller, int don) {

        money -= don;
        numOfApple = seller.appleSales(don);

    }
    void buyerResult() {

        cout << "������ ����� : " << numOfApple << endl;
        cout << "���� �� : " << money << endl;

    }


};       


int main() {

    AppleBuyer buyer;
    AppleSeller seller;

    buyer.init(10000);
    seller.init(50, 1000);

    buyer.buyerResult();
    buyer.buy(seller, 2000);
    buyer.buyerResult();
    seller.salesResult(); // 48, 2000

    return 0;
}