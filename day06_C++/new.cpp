/*
	���� �Ҵ� ���� ũ�⸦ �Է¹ް� ���Ҹ� �����Ͽ� ����Ͻÿ�.
*/

#include <iostream>

int main() {

	int size;
	int* p;

	printf("�迭 ũ�⸦ �Է��Ͻÿ�.: ");
	scanf_s("%d", &size);
	p = (int*)malloc(size * sizeof(int));
	
	for (int i = 0; i < size; i++) {
		printf("%d��° ���� �Է�: ", i);
		scanf_s("%d", &p[i]);
	}

	for (int i = 0; i < size; i++) {
		printf("p[%d] = %d\n", i, p[i]);
	}

	free(p);

	return 0;
}