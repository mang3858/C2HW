#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() 
{
	int multiplicationTables[8][9];
	int i, j, num;

	printf("---������ ǥ�� ������ �����ϴ�\n");
	for (i = 0; i < 8; i++) {
		for (j = 0; j < 9; j++) {
			multiplicationTables[i][j] = (i + 2) * (j + 1);
			printf("%2d ", multiplicationTables[i][j]);
		}
		printf("\n");
	}

	printf("---���ϴ� ��������? ");
	scanf("%d", &num);
	for (j = 0; j < 9; j++)
		printf("%d ", multiplicationTables[num-2][j]);
	printf("\n");

	return 0;
}