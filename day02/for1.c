#include <stdio.h>

int main()
{
	printf("������ �Դϴ�.\n");

	for (int i = 1; i < 10; i++) {
		printf("===%d�� �Դϴ�.===\n", i);
		for (int j = 1; j < 10; j++) {
			printf("%d X %d = %d\n", i, j, i * j);
		}
	}

	int input;
	printf("����ϰ��� �ϴ� ���� �Է����ּ���.: ");
	scanf_s("%d", &input);
	printf("===%d�� �Դϴ�.===\n", input);

	for (int i = 1; i < 10; i++) {
		printf("%d X %d = %d\n", input, i, input * i);
	}
	return 0;
}