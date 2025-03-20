/*
	�̵� ������(T&&)
	r-value reference�� �Ķ���ͷ� ���� �̵� ������
*/

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

class Human {
private:
	char name[10];
	int age;
public:
	// �Է� 2�� �޴� ������
	Human(const char* name, int age){
		std::cout << "===�Է� 2�� ������ ȣ��===" << std::endl;
		strcpy(this->name, name);
		this->age = age;
	}

	// ���� ������
	Human(Human& h) {
		std::cout << "===���� ������ ȣ��===" << std::endl;
		strcpy(this->name, h.name);
		this->age = h.age;
	}

	// �̵� ������
	Human(Human&& h) noexcept{			// ������ �̵��ϴ� ���� ���� �߻����� �ʵ��� ����
		std::cout << "===�̵� ������ ȣ��===" << std::endl;
		strcpy(this->name, h.name);
		this->age = h.age;

		//h.name = nullptr;
		h.age = 0;		//�ӽð�ü �ٷ� ������ ����
	}

	void printHuman() {
		std::cout << "�̸�: " << name << ", ����: " << age << std::endl;
	}
};

int main() {

	Human h("ȫ�浿", 30);
	h.printHuman();

	Human h2(h);
	h2.printHuman();

	Human h3(std::move(h));
	h3.printHuman();
	h.printHuman();

	return 0;
}