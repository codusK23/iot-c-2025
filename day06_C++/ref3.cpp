/*
* ���۷��� - ����� ���ÿ� �ݵ�� �ʱ�ȭ�ؾ߸� �Ѵ�.
*/

#include <iostream>

int main() {

	int num = 10; int num2 = 100;
	int& ref = num;			// ���۷��� ����, num�� �޸� ������ ref��� ������ �ٴ´�.
	int* pn = &num;			// ������ ����
	int& rref = ref;
	rref = num2;

	std::cout << rref << ", " << num2 << std::endl;

	//int& rref;				
	//rref = ref;

	num++;
	ref++;
	(*pn)++;

	std::cout << " num++: " << num << std::endl;
	std::cout << "ref++: " << ref << std::endl;
	std::cout << "*(pn)++: " << *pn << std::endl;

	std::cout << "&num: " << &num << std::endl;
	std::cout << "&ref: " << &ref << std::endl;


	return 0;
}