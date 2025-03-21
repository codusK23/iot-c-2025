/*
	step3.
	char �������� name, int Ÿ���� age, ����� ����ϴ� showHuman()�� ������ Human Ŭ������ �ִ�.
	name�� �����Ҵ��ϰ� ���� 30, �̸� ȫ���� man��ü�� �����Ͻÿ�.
	man ��ü�� �����Ͽ� copy ��ü�� �����Ͻÿ�.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

class Human {
private:
	char* name;
	int age;
public:
	Human(const char* i_name, int i_age) : age(i_age){
		std::cout << "===Constructor===" << std::endl;
		name = new char[strlen(i_name) + 1];
		strcpy(name, i_name);
	}
	~Human() { 
		std::cout << "===Destuctor===" << std::endl;
		delete[] name;
	}

	Human(const Human& other) {
		std::cout << "===Copy Constructor===" << std::endl;
		name = new char[strlen(other.name) + 1];
		strcpy(name, other.name);
		age = other.age;
	}

	void showHuman() {
		std::cout << "�̸�: " << name << ", ����: " << age << std::endl;
	}
};

int main() {
	Human man("ȫ��", 30);
	man.showHuman();

	Human copyman = man;
	copyman.showHuman();

	//����
	Human xman;
	xman = copyman;
	xman.showHuman();
	return 0;
}