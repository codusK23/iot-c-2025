/*
	���� �ʱ�ȭ
*/

#include <iostream>

int main() {

	int num = 3;			// ���� �ʱ�ȭ
	int num2(10);			// ���� �ʱ�ȭ
	int num3{ 300 };		// �߰�ȣ ���� �ʱ�ȭ
	int num4 = { 3000 };	// �߰�ȣ ���� �ʱ�ȭ

	int x = 3.14;
	int x1{ 3.14 };

	std::cout<< num << std::endl;
	std::cout<< num2 << std::endl;
	std::cout<< num3 << std::endl;
	std::cout<< num4 << std::endl;
	std::cout<< x << std::endl;
	std::cout<< x1 << std::endl;

	return 0;

}