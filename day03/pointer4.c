#include <stdio.h>

void swap(int* a, int* b);

int main()
{
	int a = 10;
	int b = 20;

	printf("ȣ�� �� a: %d, b: %d", a, b);
	
	swap(&a, &b);
	printf("ȣ�� �� a: %d, b: %d", a, b);
	return 0;
}

void swap(int* pa, int* pb)
{
	int temp = *pa;
	
	*pa = *pb;
	*pb = temp;
}