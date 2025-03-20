/*
		StaticTest��� Ŭ���� ����, ��� ����: �̸�, ��ȭ��ȣ, ȸ���ּ�(cnt)
		3���� �Է��� �޴� ������ �ۼ�, ȸ�� ��ȣ�� �ڵ����� ����
		��´���� showmember() �޼��� ����

		ȸ����ȣ�� �ڵ����� �����ǵ��� ����@@
*/

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

class StaticTest {
private:
	static int cnt;
	char name[20];
	char phone[20];
	char addr[20];

public:
	StaticTest(const char* name, const char* phone, const char* addr);
	void showmember();
};

int StaticTest::cnt = 0;

StaticTest::StaticTest(const char* name, const char* phone, const char* addr) {
	cnt++;
	strcpy(this->name, name);
	strcpy(this->phone, phone);
	strcpy(this->addr, addr);
}

void StaticTest::showmember() {
	std::cout << "ȸ����ȣ: " << cnt << std::endl;
	std::cout << "�̸�: " << name << ", ��ȭ��ȣ: " << phone << ", �ּ�: " << addr << std::endl;
}

int main() {

	StaticTest m1("ȫ�浿", "010-1111-1111", "�λ�");
	m1.showmember();

	StaticTest m2("�迵��", "010-2222-2222", "�λ�");
	m2.showmember();

	StaticTest m3("��ö��", "010-3333-3333", "���");
	m3.showmember();
	return 0;
}