#include <stdio.h>

int main(void) {
	int N;
	scanf("%d", &N);
	int b = 1;
	int r;
	for (int i = 1; i <= N; i++) {
		b = b * 2;
	}
	r = (b + 1)*(b + 1);

	printf("%d\n", r);
}