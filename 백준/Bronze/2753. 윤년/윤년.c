#include <stdio.h>

int main(void) {

	int A;
	scanf("%d", &A);
	if (A % 400 == 0) printf("1\n");
	else if (A%4==0 && A%100!=0 ) printf("1\n");
	else printf("0\n");

}