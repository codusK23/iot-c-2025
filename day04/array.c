/*
	2���� �迭
*/

#include <stdio.h>

int main()
{
	int ary[4] = { 1, 2, 3, 4 };

	int ary2[3][2] = { {1, 2}, {3, 4}, {5, 6} };
	int ary3[3][4] = { {1, 2}, {3, 4, 5}, {6, 7, 8, 9} };
	int ary4[3][2] = { 1, 2, 3, 4, 5, 6 };
	int ary5[][4] = { {1, 2, 3, 4}, {5, 6, 7, 8} };

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			printf("%d, ", ary2[i][j]);
		}
	}

	printf("\n");

	int score[4][3];

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {
			printf("������ �Է����ּ���");
			scanf_s("%d", &score[i][j]);
		}
	}

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d, ", score[i][j]);
		}
	}


	return 0;
}

// ������ �Է¹ް� �л����� ������ ��� ���ϱ�. 4��, 3����