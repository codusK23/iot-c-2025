#include <stdio.h>

int main()
{
	char name[20];
	int age;

	printf("���̸� �Է����ּ���: ");
	scanf_s("%d", &age);

	printf("�̸��� �Է����ּ���: ");
	scanf_s("%s", name, sizeof(name));

	printf("����� �̸��� %s�̰� ���̴� %d�Դϴ�.", name, age);

	//int a;
	//char ch;
	//scanf("%d", &a);
	////scanf(" %c", &ch);	// scanf �Է¹��ۿ� �ִ� ���� ������, ���� �ϳ��� �Է��ϰ� ���� �� �տ� ����
	//getchar();				// �տ� ���ų� �̷��� ���
	//scanf("%c", &ch);


	return 0;
}
