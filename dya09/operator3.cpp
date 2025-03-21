/*
	����Լ� ������ �����ε� : p1 operator ������ (p2) ex) p1 operator + (p2)
*/

#include <iostream>

class MyClass {
private:
	int value;
public:
	MyClass(int n) :value(n){ }
	MyClass operator + (const MyClass& other) {				// ������ �����ε�
		std::cout << "+ overoading" << std::endl;
		return MyClass(value + other.value);
	}
	void showmyClass() {
		std::cout << "value: " << value << std::endl;
	}
};

int main() {
	MyClass obj(10);
	obj.showmyClass();						// �ʱⰪ�� ������ ��ü ����

	MyClass obj2(obj);
	obj2.showmyClass();						// obj�� �����ؼ� ��ü ����

	MyClass obj3 = obj2;
	obj3.showmyClass();						// obj�� �����ؼ� ��ü ����

	//MyClass obj4 = obj + obj2 + obj3;				// ��ü�� ���� ����� ������ ��ü ����
	MyClass obj4 = obj.operator+(obj2);
	obj4.showmyClass();
	return 0;
}