/*
	strcmp - ���ڿ� �� �Լ�
*/
#include <stdio.h>

int main()
{
	char str[100] = "apple";
	char str2[100] = "orange";

	/* str ���� ������ -1 ��ȯ, str2 ���� ������ 1 ��ȯ, ������ 0 ��ȯ */
	if (strcmp(str, str2) > 0) printf("%s\n", str2);
	else printf("%s\n", str);

	printf("a: %d\n", 'a');
	printf("a: %d\n", 'o');
	strncmp(str, str2, 3);

	return 0;
}