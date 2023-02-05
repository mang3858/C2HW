#include <stdio.h> 
int main(void)
{
	int i, j;
	int max;
	int MaxSum = 0, sum = 0;
	double ave;
	int test[4][3] = { {8, 7}, {6, 5}, {1, 2}, {3, 4} };

	printf("배열 test의 엘리먼트를 출력합니다\n"); 
	for (i = 0; i < 4; i++) { 
		printf("\n%d번째 row: ", i + 1); 
		for (j = 0; j < 3; j++)
			printf("%d ", test[i][j]);
	}
	printf("\n\n");

	printf("배열 test의 엘리먼트를 출력합니다\n");
	for (i = 0; i < 4; i++) {
		printf("\n%d번째 row: ", i + 1);
		for (j = 0; j < 3; j++) {
			test[i][2] = -1;
			printf("%d ", test[i][j]);
			sum += test[i][j];
		}
	}
	printf("\n\n");

	ave = (double)sum / 12;
	printf("Total is %d\n", sum);
	printf("Average is %.2f\n", ave);//2.67

	for (i = 0; i < 4; i++) {
		printf("\n%d번째 row에서의 최대값: ", i + 1);
		max = -1;
		for (j = 0; j < 3; j++) {
			if (max < test[i][j])
				max = test[i][j];
		}
		MaxSum += max;
		printf("%d", max);
	}
	printf("\n최대값의 합: %d", MaxSum);
	printf("\n");

	return 0;
}