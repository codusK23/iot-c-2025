/*
*  ����� ���: ���۷���
*/
#include <iostream>

int& func(int& ref) {
	ref++;

	return ref;				// lvalue
	//return ref++;			// rvalue
}

int main() {
	int n = 10;
	//int& ref = func(n);
	int ref = func(n);		// �Լ��� ���� �ڷ������� �����ϴ� ��� �����ص� �ǰ�(15��), �� �ص� �ǰ�
	std::cout << ref << std::endl;
	return 0;
}