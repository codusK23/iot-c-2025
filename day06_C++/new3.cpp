/*
*	new�� ������ ȣ���̵ǹǷ� �ʱ�ȭ�� �����ϴ�.
*	������ - ��ü�� �����ϰ�, �ʱ�ȭ ��Ű�� ����� ������ Ư���� �޼����̴�.
*/
#include <iostream>

int main() {
	int* parr;
	parr = new int[3] {10, 20, 30};					// �̸� ���� �迭 ��ü �����ϰ� 10, 20, 30���� �ʱ�ȭ �Ѵ�.
	//parr = new int[3] = { 10, 20, 30 };

	std::cout << parr[0] << ", " << parr[1] << ", " << parr[2] << std::endl;

	delete[] parr;

	return 0;
}