/*
	�޸� ���� �Ҵ� : new - delete
	�ڷ��� ������ = new�ڷ��� (ũ��)
	new�� �����ڸ� ȣ���Ѵ�. �� new�� ��ü�� ������Ų��.
	��ü�� �����ϱ� ���ؼ��� ������ ȣ���� �־�� �Ѵ�.
*/

#include <iostream>

int main() {
	
	int size;
	int* pary;

	//int *pn = new int;			//�� ������ intũ��� ���� �Ҵ��� �޴´�
	//delete pn;

	std::cout << "�迭 ũ�⸦ �Է��Ͻÿ�. >> ";
	std::cin >> size;

	pary = new int[size];
	pary[0] = 1;
	pary[1] = 2;
	*(pary + 2) = 3;

	std::cout << pary[0] << ", " << pary[1] << ", " << pary[2] << std::endl;
	delete[] pary;

	// ������ ������ ���� �� �ֱ�


	return 0;

}
