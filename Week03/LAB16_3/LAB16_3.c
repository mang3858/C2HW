#include <stdio.h> 
int main(void)
{
	char text[][10] = { "ABC", "abcd", "Hello" };
	int i, j;
	
	printf("text�� �޸� ũ��� %d�̴�.\n", sizeof(text));
	for (i = 0; i < 3; i++)
	{
		printf("%d��° ��Ʈ��: %s, ", i + 1, text[i]);
		printf("�ƽ�Ű �ڵ尪: ");
		
		j = 0;
		while (text[i][j] != '\0') {
			printf("%d ", text[i][j]);
			j++;
		}


		printf("\n");
	}
}