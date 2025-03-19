/*
	class ������
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

class MyClass {
private:
	int id;
	char name[20];
	int age;

public:
	MyClass() {}				// ����Ʈ ������
	MyClass(int i_id, const char* i_name, int i_age) {
		id = i_id;
		strcpy(name, i_name);	
		age = i_age;
	}

	void getData() {
		std::cout << "id: " << id << ", name: " << name << ", age: " << age << std::endl;
	}
};

int main() {
	MyClass obj(1, "��ö��", 20);
	obj.getData();
	return 0;
}