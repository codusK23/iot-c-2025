/*
	class ������ �޸� ���� �Ҵ�, MyClass::
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>


class MyClass {
private:
	//mutable int id;		//��� ��ü������ ��������� �� ���� ����
	int id;
	char* name;
	int age;

	// ������ ����� �����Ҵ� ������ ~~
public:
	//MyClass() {}			// ����Ʈ ������
	~MyClass() { delete[] name; }		// �Ҹ��� (�ڵ� ȣ��ȴ�. - �����Ҵ��� ����� ������ �ۼ��� �ʿ䰡 ����.)
	MyClass(int i_id, const char* i_name, int i_age);
	void getData() const;
};


MyClass::MyClass(int i_id, const char* i_name, int i_age) {
	id = i_id;
	name = new char[strlen(i_name) + 1];		// �����Ҵ�
	strcpy(name, i_name);
	age = i_age;
}

void MyClass::getData() const {			// ��� ��� �Լ�(��� ������� ���ȭ ��Ų�� -> �Ӽ� ���� �Ұ�)
	std::cout << "id: " << id << ", name: " << name << ", age: " << age << std::endl;
}

int main() {
	MyClass obj(1, "��ö��", 20);
	obj.getData();
	return 0;
}