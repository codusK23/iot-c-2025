/*
	�Լ� ������
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int sum(int, int);
int min(int, int);
void func(int (*fp)(int, int));

//void func()
int main()
{
	int (*fp)(int, int);		// �Լ� ������
	int res;

	func(&fp);

	return 0;
}

int sum(int a, int b)
{
	int res = a + b;
	return res;
}

int min(int a, int b)
{
	int res = a - b;
	return res;
}

void func(int (*fp)(int, int)) 
{
	char a[10];
	int x;
	int y;

	printf("�����ϰ��� �ϴ� �Լ��� �Է����ּ��� (sum/min): ");
	scanf_s("%s", a);

	if (strcmp(a, 'sum') == 0) {
		fp = sum;
	}
	else if (strcmp(a, 'min') == 0) {
		fp = min;
	}
	else {
		printf("�߸��� �Է��Դϴ�.\n");
	}

	printf("�����ϰ��� �ϴ� ���� �� ���� �Է����ּ���: ");
	scanf_s("%d %d", &x, &y);

	int res = fp(x, y);
	printf("���� ���: ", res);
	
}