// ��ó���� : preprocessor
#include<iostream>  // import�� ������ �ǹ̸� ���Ѵ�.

/*
	ios : input output system, �ֻ��� ��ü
	istream/ostream = opstream
	stream(��Ʈ��) : �ó���, ���(������, �����ȣ)
	c��� #include<stdio.h>
	- string.h  : ���ڿ��� ���õ� �Լ��� ���� => cstring(c++)
*/

// �����Լ� or �������� or ��ũ�λ��
/*
#define ����� = ��; 
const(=constant) : ���
- ����� ������ �ʴ� ��, ������ ��
*/

namespace A {

	void aaa() {

	}

	void bbb() {


	}

	void ccc() {


	}
}
/*
	 �̸� ���� �̸� ����
	 - namespace {...}
	 - ��� ��ü�� static Ű���尡 �پ��ִ� ȿ���� ����.
*/
namespace B {

	void aaa() {}
	void bbb() {}
	void ccc() {}

}


// main �Լ� : ���α׷��� ���۰� ���� ��Ÿ���� �Լ�
int main() { // ����Ÿ�� �Լ���(�Ű�����){....}
	/*
	�̸�����(namespace)�� ����������(scope ������, ::) ~��
	*/

	//A::aaa();  // �����Ҷ� ����

	std::cout << "Hello" << std::endl;

	/*
	printf => cout��ü�� << ������
	scanf => cin��ü�� >> ������
	
	*/

	return 0;
}