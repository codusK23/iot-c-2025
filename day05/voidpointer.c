/*
	�Լ� ������
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sum(int, int);
int min(int, int);
void func(int (*fp)(int, int));

//void func()
int main()
{
	int (*fp)(int, int);		// �Լ� ������
	int res;
	//res = sum(20, 10);
	//res = min(20, 10);
	//fp = sum;
	//res = fp(20, 10);
	//printf("res: %d\n", res);

	(*func)(10, 20);

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
	char a[4];
	printf("�����ϰ��� �ϴ� �Լ��� �Է����ּ���: ");
	scanf("%s", a);
	printf("%s", a);

	if (a == 'sum') {
		printf("���ϱ�");
	}

	//fp = sum;
	//int res = fp(20, 10);
	
	//printf("���ϴ� �Լ��� �����Դϱ�?");
	// if���̳� switch��
	
}