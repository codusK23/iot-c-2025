/*
	class
*/
#include <iostream>

class A {
public:
	int m_num;				// �������(�Ӽ�)
	
	void set(int num) {
		m_num = num;
	}

	void print() {		//��� �Լ�(���), �޼���
		std::cout << "���� A Ŭ������ �ν��Ͻ��Դϴ�." << "num: " << m_num << std::endl;
	}

};

int main() {

	A obj;		// ��ü ����
	obj.print();
	obj.set(10);
	obj.print();
	//int n;

	return 0;
}