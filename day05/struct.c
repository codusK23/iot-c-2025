/*
	struct(����ü) - ����� ���� �ڷ���
	���� �ڷ����� ��� ���� ���� �ڷ���(Ÿ��)
*/
#include <stdio.h>
#include <string.h>
# define _CRT_SECURE_NO_WARNINGS

struct Human				//����ü ���� struct ����ü��
{
	char name[100];		// �������
	int age;
};

int main()
{
	/* (.) ��� ���� ������ */
	struct Human h;		//����ü human�� ���� h����
	h.age = 30;				// h��ü�� ��� age�� 30�� �����Ѵ�.
	//h.name = "hong kildong"	// �� ��
	strcpy(h.name, "hong kildong");


	char str[100] = "hong kildong";
	printf("%s\n", str);
	//char str2[100];
	//str2 = "kim chulsu"; // �迭�̸��� �ּ�, �ּҿ��ٰ� ���� X, 

	/*
	str2[0] = 'h';
	str2[1] = 'o';
	...
	str2[10] ='\0'
	*/


	printf("���� �̸��� %s�̰� ���̴� %d�Դϴ�.", h.name, h.age);

	return 0;
}