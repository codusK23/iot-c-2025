
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

class Person {
private:
	//char m_name[20];
	//int m_age;

	char name[20];
	int age;

public:
	Person(const char* name, int age) {
		printf("===Constructor Call===\n");

		//strcpy(m_name, name);
		//m_age = age;

		strcpy(this->name, name);
		this->age = age;
	}

	Person(const Person& p) {		// ���� ������ &������ ���
		printf("===Copy Constructor===\n");
		strncpy(this->name, p.name, strlen(p.name) +1);
		this->age = p.age;
	}

	void printPerson() {
		//printf("name: %s, age: %d\n", m_name, m_age);
		printf("name: %s, age: %d\n", this->name, this->age);
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