#include <stdio.h>

int main()
{	
	char name[20];
	int age;

	printf("�̸��� �Է����ּ���: ");
	scanf_s("%s", name, sizeof(name));
	
	printf("���̸� �Է����ּ���: ");
	scanf_s("%d", &age);

	printf("�̸��� %s�̰�, ���̴� %d�� �Դϴ�.\n", name, age);

	return 0;
}