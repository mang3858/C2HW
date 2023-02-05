#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 

char askReservation();
void printSeats(int s[3][10]);
void processReservation(int s[], int seatChoiceR, int seatChoiceC);

int main(void)
{
	int seatChoiceR, seatChoiceC;
	int seats[3][10] = { 0 };

	while (askReservation() == 'y')
	{
		printSeats(seats);

		printf("���° �¼��� ���� �Ͻðڽ��ϱ�? <�� ��>�� ���·� �Է� ");
		scanf("%d %d", &seatChoiceR, &seatChoiceC);

		processReservation(seats, seatChoiceR, seatChoiceC);

		while (getchar() != '\n'); // ���� ���
	}
}
char askReservation()
{
	char choice;
	printf("�¼��� �����Ͻðڽ��ϱ�?(y/n) ");
	scanf("%c", &choice);
	return choice;
}
void processReservation(int s[3][10], int seatChoiceR, int seatChoiceC)
{
	if (s[seatChoiceR - 1][seatChoiceC - 1] == 0) {
		s[seatChoiceR - 1][seatChoiceC - 1] = 1;
		printf("����Ǿ����ϴ�.\n");
		printSeats(s);
	}
	else
		printf("�̹� ����� �ڸ��Դϴ�\n");
}
void printSeats(int s[3][10])
{
	int i, j;
	printf("--------------------------------------\n");
	printf("\t 1 2 3 4 5 6 7 8 9 10\n");
	printf("--------------------------------------\n");

	for (i = 0; i < 3; i++) {
		printf("%d\t", (i + 1));
		for (j = 0; j < 10; j++)
			printf("%2d", s[i][j]);
		printf("\n");
	}
}