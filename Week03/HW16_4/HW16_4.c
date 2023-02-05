#include <stdio.h>
void initTable(int arr[3][5], int size)
{
	int i, j;
	for (i = 0; i < 3; i++)
		for (j = 0; j < 5; j++)
			arr[i][j] = rand() % 100;
}

int totalTable(int arr[3][5], int size)
{
	int i, j;
	int total = 0;
	for (i = 0; i < 3; i++)
		for (j = 0; j < 5; j++)
			total += arr[i][j];
	return total;
}

void printTable(int arr[3][5], int size)
{
	int i, j;
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 5; j++)
			printf("%5d", arr[i][j]);
		printf("\n");
	}
}

int main(void)
{
	int table[3][5];
	int i, j;
	int total;

	//srand(time(NULL));

	initTable(table, 3);
	printf("발생된 난수의 평균은 %d입니다\n", totalTable(table, 3) / 15);

	printTable(table, 3); // 호출

	printf("---각 열의 합---\n");
	for (j = 0; j < 5; j++) {
		total = 0;
		for (i = 0; i < 3; i++) 
			total += table[i][j];
		printf("%5d", total);
	}
	printf("\n");

	return 0;
}