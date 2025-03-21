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

template<>
class CTest<char> {
private:
	char data;
public:
	CTest(char d) : data(d) {}
	char getData() { return data; }
};
int main() {
	CTest<int> obj(10);		// Ŭ���� ���ø��� �ν��Ͻ� ������ �ݵ�� typename�� �ۼ��ؾ��Ѵ�.
	return 0;
}