#include <stdio.h>

int main(void) {

	int n;
	scanf("%d", &n);
	int m = 0;
	for (int i = 1; i <= n; i++) {
		m = m + i;
	}
	printf("%d\n", m);
}

