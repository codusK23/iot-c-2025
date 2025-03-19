/*
	 ������ constructor
	 ������ ȣ��� ��ü�� ���������
	 ��ü ������ ������ �´� �����ڰ� ������ ��ü�� �������� �ʴ´�.
	 �����ڴ� �ʱ�ȭ��ɿ� ����Ѵ�.
	 �����ڴ� �����ε��� �����ϴ�.
	 ���α׷��Ӱ� �����ڸ� �ۼ��ϸ� �� �̻� ����Ʈ �����ڴ� �������� �ʴ´�
*/

#include <iostream>

class MyClass {
private:
	int m_num1;
	int m_num2;

public:
	MyClass(){}								// �⺻ ������
	MyClass(int num1) {
		m_num1 = num1;
		m_num2 = 0;
	}
	MyClass(int num1, int num2) {		// ������(�Է��� �ΰ� �޴�)
		m_num1 = num1;
		m_num2 = num2;

	}

	~MyClass(){}						// �Ҹ���

	void printData() {
		std::cout << "���� MyClass�� �ν��Ͻ� �Դϴ�.";
		std::cout << "m_num1: " << m_num1 << ", m_num2: " << m_num2 << std::endl; 

	}
};

int main() {

	//MyClass obj;
	MyClass obj2(100, 200);
	obj2.printData();

	MyClass obj3(100);
	obj3.printData();
	return 0;
}