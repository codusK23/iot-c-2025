#include <stdio.h>

int main()
{
	int ary[] = { 1, 2, 3 };

	printf("�迭�� ��üũ��: %d\n", sizeof(ary));
	printf("�迭 ���Ѱ��� ũ��: %d\n", sizeof(ary[0]));
	printf("�迭 ���� ����: %d\n", sizeof(ary) / sizeof(ary[0]));
	printf("�迭 �̸�: %p\n", ary);
	printf("�迭�� ù��°�� �ּ�: %p\n", &ary[0]);
	printf("�迭�� �ι�°�� �ּ�: %p\n", ary + 1);
	printf("�迭�� �ι�°�� �ּ�: %p\n", &ary[1]);

	int score[5];
	int num = sizeof(score) / sizeof(score[0]);
	int sum = 0;

	for (int i = 0; i < num; i++) {
		printf("������ �Է����ּ���: ");
		scanf_s("%d", &score[i]);
		sum += score[i];
	}

	printf("������ �� ���� %d���Դϴ�.", sum);
	printf("������ ����� %d���Դϴ�.", (sum / num));

	return 0;
}