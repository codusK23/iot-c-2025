/*
	strcpy - ���ڿ� ���� �Լ� / �� �ε����� �湮�ؼ� ������ �����ϴ� ��
	strncpy - // �����ּҺ��� ������ ���ڰ����� ������ �� �ִ�.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void myStrcpy(char* array, char* c_array, int size);

int main()
{
	char str[100] = "orange";
	char str2[100] = "apple";
	char* ps = "apple";

	printf("str: %s\n", str);
	printf("str2: %s\n", str2);

	strcpy(str, str2);				// strcpy(����, ����)
	printf("str: %s\n", str);
	printf("str2: %s\n", str2);

	strcpy(str, "banana");
	printf("str: %s\n", str);

	strcpy(str, ps);
	printf("str: %s\n", str);

	strncpy(str, "abcd", 3);	// �����ּҺ��� ������ ���ڰ����� ������ �� �ִ�.
	printf("%s\n", str);
	
	char array[100] = "dog";
	char c_array[100] = "cat";
	int size = sizeof(array) / sizeof(array[0]);

	myStrcpy(array, c_array, size);
	printf("myStrcpy str: %s\n", array);
	printf("myStrcpy str2: %s\n", c_array);



	//����
	//strcpy(ps, str2);
	//printf("ps: %s\n", ps);

	return 0;
}

void myStrcpy(char* array, char* c_array, int size) {
	for (int i = 0; i < size; i++) {
		array[i]  = c_array[i];
	}
}