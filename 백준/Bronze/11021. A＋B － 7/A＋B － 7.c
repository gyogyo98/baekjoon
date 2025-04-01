#include <stdio.h>

int main(void) {

	long X;
	int a, b;
	scanf("%d", &X);
	for (int i = 1; i <= X; i++) {
		scanf("%d %d", &a, &b);
		printf("Case #%d: %d\n", i, a + b);
	}
}