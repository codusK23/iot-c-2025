#include <stdio.h>

typedef int int32mt;		// int���¸� int32mt��� ���·� ���ڴ�. ���� ��Ī ����

struct human {
	char name[100];
	//int age;
	int32mt age;
};

typedef struct myst {
	int a;
	int b;
} Myst;

int main() {

	//struct human h = { "ȫ�浿", 100 };
	//struct human h2 = { "�̼���", 100 };
	struct human h = { "ȫ�浿", 100 },
		h2 = { "�̼���", 110 },
		h3 = { "������", 200 };

	int n1 = 100, n2 = 200, n3 = 300;

	return 0;
}