/*
*/
#include <iostream>

template <typename T>
class CTest {
private:
	T num;
public:
	CTest(T n) : num(n) {}
	T getData() { return num; }
};

int main() {
	CTest<int> obj(10);		// Ŭ���� ���ø��� �ݵ�� �ν��Ͻ� ������ typename�� �ۼ��ؾ��Ѵ�.
	return 0;
}