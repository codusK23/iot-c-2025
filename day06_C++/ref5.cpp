/*
*  ����� ���: �Ϲݺ���
*/

#include <iostream>

int func(int& anum) {
	anum++;
	return anum;
}

int main() {

	int num = 10;
	//int res = func(num);
	//const int& res = func(num);    // �ӽð�ü�� ������ �� ������ const�� ����� �� �ӽð�ü�� ���� ���� ���
	const int& res = func(num);
	std::cout << res << std::endl;
	return 0;
}