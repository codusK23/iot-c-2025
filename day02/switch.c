#include <stdio.h>

int main()
{
	int num = 10;
	int n = 0;
	switch (num) {
	case 10:
		printf("����");
		//break;				// �ݺ����� �����.
	case 50:
		printf("����");
		break;
	case 200:
		printf("ŭ");
		break;
	default:
		printf("�̰͵� ���͵� �ƴ�");
		break;


	}
	return 0;
}

// Switch(���ǽ�) ~ case: