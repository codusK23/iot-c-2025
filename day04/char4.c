#include <stdio.h>

void myStrInput(char* array, int size);

int main()
{
	char str[100];								// ���ڿ��� ������ �迭
	int size = sizeof(str) / sizeof(str[0]);
	myStrInput(str, size);						// ���ڿ� �Է��� �޴� �迭
	printf("�Է��� ���ڿ�: %s\n", str);

	return 0;
}

void myStrInput(char* array, int size)
{
	int i = 0;
	while (1) {
		array[i] = getchar();
		if (array[i] == '\n' || i >= (size - 1)) break;
		i++;
	}
	array[i] = '\0';
}