/*
  6�ܰ� : 3���� ������ �Է¹޾� ó���ϵ��� 2���� �迭�� ����
*/


#include <iostream>
#include <string>
using namespace std;

int main() {
    int score[3][4];
    // score[][0]:kor, score[][1]:eng, score[][2]:math, score[][3]:tot
    float avg[3];
    char grade[3];
    string s[3] = { "kor", "eng", "math" };

    for (int inwon = 0; inwon < 3; inwon++) {
        score[inwon][3] = 0;
        for (int i = 0; i < 3; i++) {
            do {
                cout << s[i] + " = ";
                cin >> score[inwon][i];
            } while (score[inwon][i] < 0 || score[inwon][i] > 100);
            score[inwon][3] += score[inwon][i];
        }

        avg[inwon] = score[inwon][3] / 3.0f;

        switch (int(avg[inwon]) / 10) {
        case 10: case 9: grade[inwon] = 'A'; break;
        case 8: grade[inwon] = 'B'; break;
        case 7: grade[inwon] = 'C'; break;
        case 6: grade[inwon] = 'D'; break;
        default: grade[inwon] = 'F';
        }
    }

    for (int inwon = 0; inwon < 3; inwon++) {
        cout << "���� = " << score[inwon][3] << ", ��� = " << avg[inwon] << endl;
        cout << "���� = " << grade[inwon] << endl;
    }
    return 0;
}