/*

�迭�� ���� �Ҵ� �� ��ȯ
������Ÿ�� *�����ͺ��� = new ������Ÿ��[�迭��ũ��];
delete[] ������ ����;

*/
// ����ڷκ��� ������ ������ �Է¹޾� �迭�� �������� �Ҵ��ϰ�
// ������ �Է¹޾� ����� ����Ͽ� ����ϴ� ���α׷��� �����Ͻÿ�.


#include<iostream>
using namespace std;

int main() {
	cout << "�迭�� ũ�� = ";
	int count;
	cin >> count;

	int* p = new int[count];
	if (!p) {
		cout << "�޸𸮸� �Ҵ����� ���߽��ϴ�." << endl;
		return 0;
	}

	int sum = 0;
	for (int i = 0; i < count; i++) {
		cout << i + 1 << "��° �� = ";
		cin >> p[i];
		sum += p[i];
	}

	cout << "��� = " << sum / count << endl;

	delete[] p;

	return 0;
}