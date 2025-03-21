/*
	���ø� �Ű�����
*/

#include <iostream>

template <typename T, int sz>
class CTest {
private:
	T ary[sz];
public:
	T& operator[](int idx) {					// ���� ���� �ε���
		if (idx < 0 || idx >= sz) {
			std::cout << "Error" << std::endl;
			exit(1);
		}
		return ary[idx];
	}
	void getData() {
		for (int i = 0; i < sz; i++) {
			std::cout << ary[i] << std::endl;
		}
	}
};

int main() {

	CTest<int, 5> obj;
	obj.operator[](0) = 10;
	obj[1] = 20;
	obj[2] = 30;
	obj[3] = 30;
	obj[4] = 30;

	obj.getData();

	std::cout << obj[0] << std::endl;

	return 0;
}