#include <stdio.h>

int main()
{
	int num = 2;
	int input;
	printf("1~5������ ���ڸ� �Է����ּ��� : ");
	scanf_s("%d", &input);
	switch (input) {
	case 5:
		printf("5���� �۽��ϴ�.");
		break;				
	case 4:
		printf("4���� �۽��ϴ�.");
		break;
	case 3:
		printf("3���� �۽��ϴ�.");
		break;
	case 2:
		printf("�����Դϴ�.");
		break;
	case 1:
		printf("1���� Ů�ϴ�.");
		break;
	default:
		printf("1~5������ ���ڸ� �Է����ּ���");
		break;
	}
	return 0;
}

// Switch(���ǽ�) ~ case: