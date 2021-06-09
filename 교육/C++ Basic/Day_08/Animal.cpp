#include <iostream>
#include <cstring>
//#include <string>
using namespace std;
#pragma warning(disable:4996)

struct Animal {
    char name[30];      // �̸�
    //string name;
    int age;         // ����
    int health;         // ü��
    int food;         // ������
    int clean;         // û�ᵵ
};

void create_animal(Animal* animal) {
    cout << "���� �̸� = ";
    cin >> animal->name;

    cout << "���� ���� = ";
    cin >> animal->age;

    animal->food = 100;
    animal->clean = 100;
    animal->health = 100;
}

void play(Animal* animal) {
    animal->health += 10;
    animal->food -= 20;
    animal->clean -= 30;
}

void one_day_pass(Animal* animal) {
    // �Ϸ簡 ������
    animal->health -= 10;
    animal->food -= 30;
    animal->clean -= 20;
}

void show(Animal* animal) {
    cout << animal->name << "�� ���� : " << endl;
    cout << "ü�� : " << animal->health << endl;
    cout << "û�� : " << animal->clean << endl;
    cout << "��θ� : " << animal->food << endl << endl;
}

int main() {
    // ����ü ������ �迭
    Animal* list[10];
    int animal_num = 0;

    //for (;;) {
    while (true) {
        cout << "1. ���� �߰��ϱ�" << endl;
        cout << "2. ���" << endl;
        cout << "3. ���º���" << endl;
        cout << "4. ����" << endl;

        int menu;
        cout << "���� = ";
        cin >> menu;

        switch (menu) {
            int play_with;

        case 1: {
            list[animal_num] = new Animal;
            create_animal(list[animal_num++]);
            break; }

        case 2: {
            cout << "������ ���? = ";
            cin >> play_with;
            if (play_with < animal_num)
                play(list[play_with]);
            break; }

        case 3: {
            cout << "������ ����? = ";
            cin >> play_with;
            if (play_with < animal_num)
                show(list[play_with]);
            break; }

        case 4: {
            cout << "�۾��� �����մϴ�.\n";
            return 0; }
        }

        // �Ϸ簡 ������.
        for (int i = 0; i < animal_num; i++)
            one_day_pass(list[i]);
    }

    // �����Ҵ���� �޸𸮸� ��ȯ
    for (int i = 0; i < animal_num; i++)
        delete list[i];

    return 0;
}