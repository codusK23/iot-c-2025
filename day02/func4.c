/*
	�Լ� ����
	�Լ� ����, �Լ� ȣ��, �Լ� ����
*/
#include <stdio.h>

int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
float div(int a, int b);

//int func(int, int);		//�Լ� ����, �Լ� ���� -> �����Լ��� ���� ���� �ø��� ����� �Լ��� �ִٰ� �˷��ִ� �Լ� ����

int main()
{
	int a;
	int b;
	char c;

	printf("�ΰ��� ������ �Է��ϼ���.: ");
	scanf_s("%d %d", &a, &b);

	printf("�����ڸ� �Է��ϼ���.: ");
	scanf_s(" %c", &c, sizeof(c));

	if (c == '+') printf("%d %c %d = %d", a, c, b, add(a, b));
	else if (c == '-') printf("%d %c %d = %d", a, c, b, sub(a, b));
	else if (c == '*') printf("%d %c %d = %d", a, c, b, mul(a, b));
	else if (c == '/') printf("%d %c %d = %.1f", a, c, b, div(a, b));
	else printf("�߸��� �������Դϴ�.");

	/*int result = func(10, 20);
	printf("ȣ�� �� ���ϵ� ��: %d\n", result);*/

	return 0;
}

int add(int a, int b) {
	int result = a + b;
	return result;
}

int sub(int a, int b) {
	int result = a - b;
	return result;
}

int mul(int a, int b) {
	int result = a * b;
	return result;
}

float div(int a, int b) {
	float result = a / b;
	return result;
}

//int func(int a, int b) {
//	int res = a + b;
//	return res;
//}