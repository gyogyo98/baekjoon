#include <stdio.h>

int main(void) {

	int A, B, C;
	scanf("%d %d", &A, &B);
	scanf("%d", &C);
	A = A + ((B+C) / 60);
	B = (B + C) % 60;

	if (A >= 24) A -= 24;

	printf("%d %d\n", A, B);
}