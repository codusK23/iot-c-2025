#include <stdio.h>

typedef struct addr {
	char name[20];
	int age;
	char tel[20];
	char addr[100];
} Addr;

void print_list(Addr*);

int main() {
	// ����ü �迭
	Addr list[3] = { {"ȫ�浿", 100, "010-123-1234", "����" },
						{ "��ö��", 33, "010-222-2222", "�λ�" },
						{"�迵��", 24, "010-333-3333", "���"}
	};

	print_list(list);

	return 0;
}

void print_list(Addr* a) {
	for (int i = 0; i < 3; i++) {
		printf("�̸�: %s, ����: %d, ��ȭ��ȣ: %s, �ּ�: %s\n", a[i].name, a[i].age, a[i].tel, a[i].addr);
	}

}