#include <stdio.h> 
int main(void)
{
	int arr1[2][4] = { 1, 2, 3, 4, 5, 6, 7, 8 };
	int arr2[4][2];
	int arr3[8];
	int i, j; // �� �̻��� �ε��� ������ ��� ����.

	/* �̵�(����) A -> B*/
	for (j = 0; j < 2; j++) 
		for (i = 0; i < 4; i++)
			arr2[i][j] = arr1[j][i];

	/* �̵�(����) A -> C*/
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 4; j++) {
			arr3[j] = arr1[0][j];
			arr3[j + 4] = arr1[1][j];
			//arr3[i * 4 + j] = arr2[j][i];
		}
	}

	/* A, B, C ��� */
	printf("---�迭A\n");
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 4; j++)
			printf("%d ", arr1[i][j]);
		printf("\n");
	}

	printf("\n---�迭B\n");
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 2; j++)
			printf("%d ", arr2[i][j]);
		printf("\n");
	}

	printf("\n---�迭C\n");
	for (i = 0; i < 8; i++) 
		printf("%d ", arr3[i]);
	printf("\n");

	return 0;
}