/*
	C++ class
*/

#include <iostream>

class Human {
public:
	char name[20];
	int age;
	char job[10];

	Human() {}		// default ������(�Է��� ���� ��), ������ ��ü�� return�� ����, Ŭ������ �̸��� �Ȱ���

	void showHuman() {
		printf("name: %s, age: %d, job: %s", name, age, job);
	}
};

int main() {
	Human h = { "��ö��", 30, "���" };
	h.showHuman();

	return 0;
}
