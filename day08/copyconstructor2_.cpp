/*
		(deep copy) ���������
		�����Ҵ� ���� ��� �����ϴ� ��ü�� ���� �Ҵ� �޾Ƽ� ������ �����Ͽ� ������ �Ǿ�� �Ѵ�.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

class Person {
private:
	char* name;
	int age;
public:
	Person(const char* name, int age) {
		std::cout << "===Constructor Call===" << std::endl;

		this->name = new char[strlen(name) + 1];			// �����Ҵ�
		strcpy(this->name, name);
		this->age = age;
	}
	
	Person(const Person& p) {					// ���� ���� ������
		std::cout << "===Copy Constructor Call===" << std::endl;

		this->name = new char[strlen(p.name) + 1];
		strncpy(this->name, p.name, strlen(p.name) + 1);
		this->age = p.age;
	}

	~Person() { delete[] name; }

	void printPerson() {
		std::cout << "�̸�: " << name << ", ����: " << age << std::endl;
	}
};

int main() {

	Person p("ȫ�浿", 30);
	p.printPerson();

	Person p2(p);
	p2.printPerson();

	Person p3 = p;
	p3.printPerson();

	return 0;
}

/*
	����Ʈ, �ڵ����� �����޴� ������ : ����Ʈ ������, ���� ������, �Ҹ���
*/