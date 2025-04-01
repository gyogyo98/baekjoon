#include <stdio.h>

int main(void) {
	int A, B;
	scanf("%d %d", &A, &B);
	int C, D, E, F;
	C = A * (B % 10);
	D = A * ((B / 10) % 10);
	E = A * (B / 100);
	F = A * B;
	printf("%d\n%d\n%d\n%d\n", C, D, E, F);
}