/*
	�ٸ� �Լ��� ����� ���� ������ ���� �ٲٴ� ��� 2
	���۷��� - �� �ٸ� �̸�, ������ �ʴ� ������, �޸𸮸� ������� �ʴ´�.
*/

#include <iostream>
using namespace std;

void chFunc(int& rn);

int main() {

	int n = 10;
	cout << "ȣ�� �� n: " << n << endl;

	chFunc(n);
	cout << "ȣ�� �� n: " << n << endl;

	return 0;
}

void chFunc(int& rn) {			// &: ���۷��� (��������) ����
	rn = 20;
}