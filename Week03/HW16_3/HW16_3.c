#include <stdio.h> 
int main(void) 
{
	int gradeTable[5][4] = {{10, 15, 20, 0}, {30, 35, 20, 0}, 
				{60, 65, 20, 0}, {90, 95, 20, 0}, {0, 0, 0, 0}};
	int i, j;
	int studentTotal;
	int testTotal;

	printf("a)\n");
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 4; j++) 
			printf("%4d", gradeTable[i][j]); 
		printf("\n"); 
	}
	
	printf("b)\n");
	for (i = 0; i < 4; i++) {
		studentTotal = 0;
		for (j = 0; j < 4; j++) 
			studentTotal += gradeTable[i][j];
		gradeTable[i][3] = studentTotal;
	}

	for (j = 0; j < 3; j++) {
		testTotal = 0;
		for (i = 0; i < 5; i++) 
			testTotal += gradeTable[i][j];
		gradeTable[4][j] = testTotal;
	}

	for (i = 0; i < 5; i++) {
		for (j = 0; j < 4; j++)
			printf("%4d", gradeTable[i][j]);
		printf("\n");
	}
}
