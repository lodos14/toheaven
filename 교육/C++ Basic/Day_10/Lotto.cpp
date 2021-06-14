/*
   �ζ� ���� ���α׷�
   STL�� �̿���(����) ������Ʈ
   ������ �ζ� ������ �Է¹ް�, ��÷��ȣ 6���� ���ʽ� ��ȣ 1����
   �̿��Ͽ� ����ڰ� ������ �ζ� ������ ��÷���θ� ����ϴ� ���α׷�
   <ó������>
   - �ζǴ� 1 ~ 45 ������ ��ȣ�� �ߺ����� �������� 6���� ����
   - �������� �߻���Ų ��÷��ȣ�� ���Ϳ� ����
   - ����ڰ� ������ �ζ��� ������ �̿��� �����ȣ�� �������� ����
   - ������ ��ȣ�� �Բ� ����� �����ϱ� ���� Ŭ���� ����

   <�Է� �� �������>
   �ζ� ���� ���α׷�
   ***************************************************
   * 1��(6�� ���� ��ġ, ���ʽ� ����) : ��� 1,800,000,000��
   * 2��(5�� ���� ��ġ, ���ʽ� ����) : ���   200,000,000��
   * 3��(5�� ���� ��ġ, ���ʽ� ����) : ���    30,000,000��
   * 4��(4�� ���� ��ġ, ���ʽ� ����) : ���     2,000,000��
   * 5��(3�� ���� ��ġ, ���ʽ� ����) : ���         5,000��
   ***************************************************
   ������ �ζ� ���� = 10

   ������ ��ȣ
   ***************************************************
   * NO 1 :
   * NO 2 :
   *   :
   ***************************************************
   ��÷��ȣ :
   ���ʽ�   :
   ***************************************************
   ��÷���(��÷��):
   ��÷�� �����ȣ�� ����
*/

#include<iostream>
#include<time.h>  // ����ó��
#include<vector>
#include<set>    // �ߺ����� ���ڸ� ó��
#include<algorithm>
using namespace std;

// ��¸� ���� �����Լ�
void PrintElement(int n) {
	cout << n << "\t";
}

// �ζ� ��ȣ�� �����ϴ� Ŭ���� ����
class LottoGenerator {
public:
	vector<int> ball;   // �ζǹ�ȣ�� ������ ���� ����

	// 6���� �ζ� ���ڿ� ���ʽ��� ������ �ζ� ���ڸ� �����ϴ� ������ �޼���
	LottoGenerator() {
		makeRandom(6);
	}

	LottoGenerator(int count) { // ��÷��ȣ�� ���ʽ���ȣ�� �����ϴ� �޼���
		makeRandom(count);
	}

	// �������� �ζ� ��ȣ�� �����Ͽ� set�� ������ ����
	set<int> RangeRandDemo(int range_min, int range_max, int n) {
		set<int> s;

		while (true) {
			// �ϳ��� ���� �߻�
			int u = (double)rand() / (RAND_MAX + 1) *
				(range_max - range_min) + range_min;
			// �߻��� ���� set�� ����
			s.insert(u);
			if (s.size() >= n) break;
		}

		return s;
	}

	void makeRandom(int count) {
		set<int> s;
		s = RangeRandDemo(1, 46, count);

		set<int>::iterator iter;
		for (iter = s.begin(); iter != s.end(); iter++)
			ball.push_back(*iter);
	}

	// �ζ� ��ȣ�� ����ϴ� �����Լ�
	void lottoprn() {
		for_each(this->ball.begin(), this->ball.end(), PrintElement);
		cout << endl;
	}
};

// ����ڰ� ������ �ζ� ��ȣ�� ��÷������ ��� Ŭ����
class UserLotto {
public:
	int pos;  // ��÷�� ���𺹱� ��ȣ
	LottoGenerator lotto;
	int grade; // ��÷����

	UserLotto() {
		grade = 0;
	}
};

// �����Լ�
void line() {
	cout << "***************************************************\n";
}

void title() {
	cout << "\t" << "�ζ� ���� ���α׷�\n";
	line();
	cout << "1��(6�� ���� ��ġ, ���ʽ� ����) : ��� 1,800,000,000��\n";
	cout << "2��(5�� ���� ��ġ, ���ʽ� ����) : ���   200,000,000��\n";
	cout << "3��(5�� ���� ��ġ, ���ʽ� ����) : ���    30,000,000��\n";
	cout << "4��(4�� ���� ��ġ, ���ʽ� ����) : ���     2,000,000��\n";
	cout << "5��(3�� ���� ��ġ, ���ʽ� ����) : ���         5,000��\n";
	line();
}

// ��÷���ο� ����� ����ϴ� �Լ�
void Lotto(UserLotto user) {
	switch (user.grade) {
	case 1:
		cout << "1��(�ѻ�� 1,800,000,000��) : ";
		break;
	case 2:
		cout << "2��(�ѻ��   200,000,000��) : ";
		break;
	case 3:
		cout << "3��(�ѻ��    30,000,000��) : ";
		break;
	case 4:
		cout << "4��(�ѻ��     2,000,000��) : ";
		break;
	case 5:
		cout << "5��(�ѻ��         5,000��) : ";
		break;
	}

	if (user.grade >= 1 && user.grade <= 5) {
		cout << "\n NO " << user.pos << " : ";
		user.lotto.lottoprn();
	}
}

// �����ȣ�� ��÷��ȣ�� ���Ͽ� ��ġ�ϴ� ������ ���� ��������
void counts(vector<UserLotto> user, LottoGenerator lotto) {
	int matchingcount;

	vector<int>::iterator num1, num2;
	// ����ڰ� ������ ������ŭ �ݺ�ó��
	for (int i = 0; i < user.size(); i++) {
		matchingcount = 0;
		// ��÷��ȣ�� ����� ��ȣ�� ���ϴ� �۾� - ��÷��ȣ���� ���ʽ� ����
		for (num1 = lotto.ball.begin(); num1 < lotto.ball.end() - 1; num1++) {
			for (num2 = user[i].lotto.ball.begin(); num2 < user[i].lotto.ball.end(); num2++) {
				if (*num1 < *num2) {
					break;
				}
				if (*num1 == *num2) {
					matchingcount++;
				}
			}
		}

		switch(matchingcount) {
		case 3: // ��ġ�ϴ� ������ 3�̸�
			user[i].grade = 5;
			break;
		case 4:
			user[i].grade = 4;
			break;
		case 5: // ��÷��ȣ(6+1) - �����(6)
		{
			user[i].grade = 3;
			// �̶� ���ʽ� ��ȣ�� ��ġ�ϸ� 2��
			int bonus = *(lotto.ball.end() - 1);

			vector<int>::iterator iter;
			//find(������ġ, ��������ġ, ã����)
			iter = find(user[i].lotto.ball.begin(), user[i].lotto.ball.end(), bonus);
			if (iter != user[i].lotto.ball.end())  
				user[i].grade = 2;
			 
			break;
		}
		case 6:
			user[i].grade = 1;
			break;
		default:
			user[i].grade = 0;
		}
		Lotto(user[i]);
	}
}

int main() {
	// ����ڰ� ������ �ζǹ�ȣ�� ������ ��ü
	vector<UserLotto> user;
	int userCount;
	int pos = 1;
	int i;

	title();
	cout << "������ �ζ� ���� = ";
	cin >> userCount; // 5

	cout << "������ ��ȣ : \n";
	line();

	for (i = 0; i < userCount; i++) {
		UserLotto userlotto;
		userlotto.pos = i + 1;
		cout << "NO " << userlotto.pos << " : ";
		userlotto.lotto.lottoprn();
		user.push_back(userlotto);
	}

	// ��÷��ȣ ����
	LottoGenerator lotto(7);  // ��÷��ȣ6 + ���ʽ�1
	line();
	cout << "��÷��ȣ : ";
	lotto.lottoprn();
	cout << "���ʽ�   : " << lotto.ball[6] << endl;
	line();

	counts(user, lotto);

	return 0;
}
