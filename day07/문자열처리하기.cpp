/*
	���ڿ� ó���ϱ�
*/

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main() {

	char str[20] = "ȫ�浿";
	std::cout << str << std::endl;

	char str2[20];
	//str2 = "�迵��";			// �ּҿ� ���ڿ��� �����϶�� �ǹ� -> �Ұ�
	strcpy(str2, "�迵��");

	std::cout << str2 << std::endl;


	char str3[100];
	std::cout << "�̸��Է� >> ";
	std::cin >> str3;
	std::cout << str3 << std::endl;


	//char* name;
	//name = 'ä��';		// �Ұ�


	const char* name;
	name = "ä��";			// const ���̸� ���� ����� ����
	std::cout << name << std::endl;




	return 0;
}