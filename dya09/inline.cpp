#include <iostream>

#define ADD(a, b)	#a "+" #b		// ��ũ�� �Լ�
#define PI			3.14
#define MSG(x, y, z)	x ## y ## z

int main() {

	std::cout << "ADD(a, b): " << ADD(10, 20) << std::endl;
	std::cout << "MSG(x, y, z)" << MSG("a", "b", "c") << std::endl;

	return 0;
}