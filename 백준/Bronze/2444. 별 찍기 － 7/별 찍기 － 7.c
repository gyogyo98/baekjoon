
#include <stdio.h>


int main(void)
{
	int i, j;

	int N;

	scanf("%d", &N);

	for (i = N-1; i >= 0; i--)
	{
		for (j = i; j > 0; j--)
		{
			printf(" ");
		}
		for (j = 2 * (N - i) - 1; j > 0; j--)
		{
			printf("*");
		}
		printf("\n");
	}

	for (i = 1; i < N; i++)
	{
		for (j = 0; j < i; j++)
		{
			printf(" ");
		}
		for (j = 0; j < 2*(N-i)-1; j++)
		{
			printf("*");
		}
		printf("\n");
	}


}