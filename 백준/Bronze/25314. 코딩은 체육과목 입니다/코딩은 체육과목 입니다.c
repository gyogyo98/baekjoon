#include <stdio.h>

int main(void) {

	long X;

	scanf("%d", &X);
	X = X/4;
	for (int i = 0; i < X; i++) {
		printf("long ");
	}

	printf("int\n");
}
