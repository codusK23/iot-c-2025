/*
*	��� �ʱ�ȭ
*	1. ��� �ʱ�ȭ
*	2. ���۷��� �ʱ�ȭ
*	3. ��ü�� �����ڷ� ������ ���
*/

#include <iostream>

//=============== ��� �ʱ�ȭ ===============
class ConstClass {
private:
	int m_value;
	const int m_value2;		// ��� ��� ������ ��ü �����Ǳ� ���� �ݵ�� �ʱ�ȭ�� �Ǿ�� �Ѵ�.
public:																															
	ConstClass(int value, int value2) : m_value2(value2) { m_value = value; }//m_value2 = value2; }		
	// ����� �ݷ� �ʱ�ȭ�� �����ؾ���. �����ڰ� ����Ǳ� ���� �ʱ�ȭ�� �̷������ϱ� ����

	void showValue() {
		printf("m_value: %d, m_value2: %d\n", m_value, m_value2);
	}
};


//=============== ���۷��� �ʱ�ȭ ===============
class RefClass {
private:
	int& ref;				// ���۷��� ���� ��ü�� �����Ǳ� ���� �ݵ�� �ʱ�ȭ�� �̷�������Ѵ�.
public:
	RefClass(int& r): ref(r) { }
	void showValue() {
		printf("ref: %d\n", ref);
	}
};

//=============== ��ü�� �����ڷ� ������ ��� ===============
class Position{
//private:
//	int m_x;
//	int m_y;
public:
	int m_x;
	int m_y;
	Position(int x, int y) {
		printf("position ������!!\n");
		m_x = x, m_y = y; 
	}

	void getData() {
		printf("m_x: %d, m_y: %d\n", m_x, m_y);
	}
};

class ObjClass {
private:
	Position pos;				// ��ü �������
public:
	ObjClass(int x, int y) : pos(x, y) { printf("ObjClass constructor!!\n"); }
	void showValue() {
		pos.getData();
	}
};

int main() {
	ConstClass obj(10, 20);
	obj.showValue();

	int n = 50;
	RefClass obj2(n);
	obj2.showValue();

	std::cout << "=====================" << std::endl;
	ObjClass o(3, 6);
	o.showValue();

	return 0;
}
