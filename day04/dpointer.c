/*
	����������
*/
#include <stdio.h>

int main()
{
	int n = 100;
	int* pn;
	int** ppn;		// ���� ������

	pn = &n;				// ���� n�� �ּҸ� ����
	ppn = &pn;			// ������ ���� pn�� �ּҸ� �����ϴ� ���� ������

	printf("n: %d\t n �ּ�: %p\n", n, &n);
	printf("pn: %p\t pn �ּ�: %p\t n ��: %d\n", pn, &pn, *pn);
	printf("ppn: %p\t ppn �ּ�: %p\t *ppn: %p\t **ppn: %d\n", ppn, &ppn, *ppn, **ppn);

	return 0;
}