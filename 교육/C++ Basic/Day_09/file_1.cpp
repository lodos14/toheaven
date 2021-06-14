/*
C++ ���� �����(File I/O)
- ����(file) : ������������ ó�� ����
- �ؽ�Ʈ ���� : ���ڸ����� ������ ����, txt, html, xml, c/c++, java
- ���̳ʸ� ���� : ����, �׸�, ǥ, ����, ��������
               hwp, doc, ppt, jpeg, bmp, mp3....
- ���� ����� ���̺귯��
  fstream : iostream
  ifstream : istream, �б�
  ofstream : ostream, ���

- ��������� ���
  step1. ���ϰ�ü ����
  step2. ���Ͽ���
  step3. �۾�
  step4. ���ϴݱ�
*/

#include<iostream>
#include<fstream> // ifstream or ofstream
using namespace std;

int main() {
    // step1. ���� ��ü ����
    ofstream fout;

    // step2. ���� ����
    // open(���ϸ�, mode)
    // mode : r(read), w(write), a(append), rb, wb, ab
    fout.open("song.txt");
    if (!fout) { // ���� ������ ���
        cout << "song.txt ������ ���� ���߽��ϴ�.\n";
        return 0;
    }

    //step3. �۾�
    int age = 21;
    char singer[] = "kim";
    char song[] = "Yesterday";

    fout << age << '\n';
    fout << singer << endl;
    fout << song << endl;

    //step4. ���� �ݱ�
    fout.close();

    return 0;
}

