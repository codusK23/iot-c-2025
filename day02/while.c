#include <stdio.h>

int main() {
	int i = 0;
	while (i < 5) {
		printf("�ȳ��ϼ���. %d\n", i+1);
		i++;
	}

	int a = 1;
	int sum = 0;

	while (a < 101) {
		sum += a;
		a++;
	}

	printf("1~100�� ���� %d", sum);
	return 0;
}