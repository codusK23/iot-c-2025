/*
	��ȯ ������
	�ٸ� Ÿ���� ��ü�� ��ȯ�� �� ȣ��Ǵ� ������
*/
#include <iostream>
class MyClass {
private:
	int value;
public:
	MyClass(int value) {
		std::cout << "��ȯ ������ ȣ��!!" << std::endl;
		this->value = value;
	}

	void printMyClass() {
		std::cout << "value: " << value << std::endl;
	}
};
int main() {

	MyClass obj = 10;
	obj.printMyClass();

	MyClass obj2(10);
	obj2.printMyClass();

	return 0;
} 