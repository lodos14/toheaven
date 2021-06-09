/*
  ������ �ʱ�ȭ
  Ŭ������ const, static ����
  ���۷��� Ÿ���� �����ϴ� �Լ�
  this ������
  const ��� �Լ�
*/

#include <iostream>
using namespace std;

class Marine {
    static int total_marine_num;

    int hp;                  // ���� ü��
    int coord_x, coord_y;      // ���� ��ġ
    //int damage;               // ���ݷ�
    bool is_dead;            // ����Ȯ��

    // �⺻ ���ݷ�
    const int default_damage;      //   const , final  - �����ϸ� ���� �ٲ� �� ����

public:
    Marine();               // �⺻������
    Marine(int x, int y);      // x, y ��ǥ�� �ִ� ���� ����
    Marine(int x, int y, int default_damage);

    int attack();            // ������ ����
    void be_attacked(int damage_earn);   // ���� ������
    void move(int x, int y);   // ���ο� ��ġ
    void show_status();         // ���� ���

    ~Marine() {
        total_marine_num--;
    }
};

int Marine::total_marine_num = 0;

Marine::Marine()
    : hp(50), coord_x(0), coord_y(0), default_damage(5), is_dead(false) {
    total_marine_num++;
}

Marine::Marine(int x, int y)
    : hp(50), coord_x(x), coord_y(y), default_damage(5), is_dead(false) {
    total_marine_num++;
}

Marine::Marine(int x, int y, int default_damage)
    : hp(50), coord_x(x), coord_y(y), /*damage(5),*/ is_dead(false), default_damage(default_damage) {
    total_marine_num++;
}


int Marine::attack() {                  // ������ ����
    return default_damage;//damage;
}

void Marine::be_attacked(int damage_earn) {   // ���� ������
    hp -= damage_earn;
    if (hp <= 0) is_dead = true;
}

void Marine::move(int x, int y) {         // ���ο� ��ġ
    coord_x = x;
    coord_y = y;
}
void Marine::show_status() {
    cout << " *** Marine *** " << endl;
    cout << "Location : (" << coord_x << ", " << coord_y << ")" << endl;
    cout << "HP : " << hp << endl;
    cout << "���� �� ���� �� : " << total_marine_num << endl;
}

void create_marine() {
    Marine marine3(10, 10, 4);
    marine3.show_status();
}

int main() {
    Marine marine1(2, 3, 10);
    marine1.show_status();

    Marine marine2(3, 5, 10);
    marine2.show_status();

    cout << "����1�� ����2�� ����!" << endl;
    marine2.be_attacked(marine1.attack());

    marine1.show_status();
    marine2.show_status();

    create_marine();

    return 0;
}