/*
	getchar, putchar - ���� ���� �Լ�
*/
#include <stdio.h>

int main()
{
	int ch;

	ch = getchar();			// �� ���ڸ� �о���� �Լ�
	putchar(ch);	
	putchar('\n');
	printf("input: %d\n", ch);
	putchar(ch);				// �ѹ��ڸ� ����ϴ� �Լ�

	return 0;
}