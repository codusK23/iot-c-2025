/*
*/
#include <stdio.h>
#include <stdlib.h>

struct mystruct {
	char name[20];
	int age;
	double height;
	char* str;
};

int main()
{
	struct mystruct s;					// mystruct ����ü ���� ����
	strcpy(s.name, "��ä��");
	s.age = 26;
	s.height = 160.6;
	s.str = (char*)malloc(sizeof(100));
	printf("�λ縻: ");
	gets(s.str);

	printf("�̸�: %s\n", s.name);
	printf("����: %d\n", s.age);
	printf("Ű: %.1lf\n", s.height);
	printf("�λ縻: %s\n", s.str);

	free(s.str);

	return 0;
}