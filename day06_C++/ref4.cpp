/*
*  ������۷��� : ����� ���� �����ϴ�.
*/

#include <iostream>

int main() {

	int n = 10;
	//int& ref = n;
	const int& ref = 10;  // ��� ���۷����� �����ϸ� ���ͷ��� ������ �� �ִ�
								// �ӽ� ��ü�� ������ �� �ִ� ������ �����ȴ�.

	std::cout << "ref: " << ref << std::endl;
	return 0;
}