/*

*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct vision {
	double left;
	double right;
} Vision;

//class vision {
//	double left;
//	double right;
//	void move() {};
//}

Vision exchange(Vision);		// �Լ� ����

int main() {
	Vision rot;
	printf("���� �÷� �Է�>> ");
	scanf("%lf", (& rot.left));

	printf("������ �÷� �Է�>> ");
	scanf("%lf", (& rot.right));

	rot = exchange(rot);

	printf("�ٲ� �÷�>> ����: %.1lf, ������: %.1lf\n", rot.left, rot.right);

	return 0;
}

Vision exchange(Vision v) {
	Vision temp;
	temp.left = v.right;
	temp.right = v.left;
	return temp;
}