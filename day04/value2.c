/*
	static
*/
#include <stdio.h>

void incFunc();
void incFunc2();

int main()
{
	for (int i = 0; i < 5; i++) {
		incFunc();
		incFunc2();
	}
	//scnt++;					// �ܺο��� ���������� ������ �����Ѵ�.
	//printf
	//scnt = +1;
	//print("%d\n", scnt);
	return 0;

}

void incFunc() {
	int cnt = 0;
	cnt++;
	printf("cnt: %d\t", cnt);
}
void incFunc2() {
	static int scnt;		// ������������: ���������� ������ ����� ��Ͼȿ����� �����ϴ�. (�������� ��� ���� ����)
	scnt++;
	printf("scnt: %d\n", scnt);
}