/*
	pointer - �ּ�,
	������ ���� - �ּҸ� ������ �� �ִ� ���� 
*/
#include <stdio.h>

int main()
{
	//int p;				// intŸ���� ���� ����
	int* p;				// intŸ���� ������ ���� ����
	char* pc;			// charŸ���� ������ ���� ����
	double* pd;

	int num=100;
	printf("num�� �ּ�: %p\n", &num);
	printf("num�� ��: %d\n", num);
	p = &num;																// int* p -> �ƹ��ǹ� ���� ǥ��
	printf("�����ͺ��� p�� ����� ��: %p\n", p);
	printf("�����ͺ��� p�� ����Ű�� ���� ��: %d\n", *p);		// * �������� ������
	num += 1;
	printf("num: %d, *p: %d\n", num, *p);

	*p += 1;
	printf("num: %d, *p: %d\n", num, *p);

	return 0;
}