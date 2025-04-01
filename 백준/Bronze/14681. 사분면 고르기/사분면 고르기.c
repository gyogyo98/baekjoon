#include <stdio.h>

int main(void) {

	int A, B;
	scanf("%d %d", &A, &B);
	if (A > 0 && B > 0) printf("1\n");
	else if (A > 0 && B < 0) printf("4\n");
	else if (A < 0 && B > 0) printf("2\n");
	else printf("3\n");


}