#include <stdio.h>

int main()
{
	int answer = 10;
	int input;

	printf("���� ���߱� �����Դϴ� !\n");

	while (1) {
		printf("������ �Է����ּ���. : ");
		scanf_s("%d", &input);

		if (input == answer){
			printf("�����Դϴ�~~\n");
			break;
		}
		else if (input > answer) printf("%d���� ���� �� �Դϴ�.\n", input);
		else printf("%d���� ū �� �Դϴ�.\n", input);
	}
}