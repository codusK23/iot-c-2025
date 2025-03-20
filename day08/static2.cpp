/* private static ��� ������ �����ϱ� ���ؼ��� static ��� �Լ��� �����ؼ� ����*/

#include <iostream>

class AAA {
private:
	static int static_a;						// static ��� ����
	int n;
public:
	AAA(int n);
	static	void setStatic_a(int a);		// static ��� �Լ� -> 1���� ����
	void print();
};

int AAA::static_a = 100;
AAA::AAA(int n) {
	this->n = 10;
}

void AAA::setStatic_a(int a) {
	static_a = a;
	//n = 0;		// �Ϲ� ����� ������ ������ �ʴ´�. static ����� ��븸 �����ϴ�.
}

void AAA::print() {
	std::cout << "static_a: " << static_a << ", n: " << n << std::endl;
}

int main() {

	AAA obj1(10), obj2(20);		// ��ü���� ��� �Լ� ������ ���� �ƴ� ������ ������� ��� �Լ� ����
	obj1.print();
	obj2.print();

	obj1.setStatic_a(50);
	obj1.print();

	return 0;
}