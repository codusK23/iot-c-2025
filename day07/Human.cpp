/*
	step1. �̸��� ��ȭ��ȣ�� �����Ҵ�.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

/*
class Human {
private:
	const char* pname;
	int age;
	const char* ptel;
public:
	Human(const char* i_pname, int i_age, const char* i_ptel) : pname(i_pname), age(i_age), ptel(i_ptel) {	 }
	~Human() {}
	void getData(){
		std::cout << "�̸�: " << pname << ", ����: " << age << ", ��ȭ��ȣ: " << ptel << std::endl;
	}
};
*/

class Human {
private:
	char* pname;
	int age;
	char* ptel;
public:
	Human(const char* i_pname, int i_age, const char* i_ptel) {
		pname = new char[strlen(i_pname) + 1];
		strcpy(pname, i_pname);

		age = i_age;

		ptel = new char[strlen(i_ptel) + 1];
		strcpy(ptel, i_ptel);
	}
	~Human() {
		delete[] pname;
		delete[] ptel;
	}
	void getData() {
		std::cout << "�̸�: " << pname << ", ����: " << age << ", ��ȭ��ȣ: " << ptel << std::endl;
	}
};

int main() {
	Human h("ȫ�浿", 30, "010-1234-1234");
	h.getData();

	return 0;
}