/*
	���ڿ�
*/

#include <stdio.h>

int main()
{

	char str[100] = "orange";

	printf("%s\n", str);
	printf("%s\n", "orange");
	printf("%u\n", "orange");  // ������ ���� �ּ�
	printf("%c\n", *"orange");
	printf("%c\n", *("orange"+1));
	printf("%c\n", "orange"[2]);

	return 0;
}
