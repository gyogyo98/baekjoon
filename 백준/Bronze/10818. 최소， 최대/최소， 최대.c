#include <stdio.h>

int main(void) {

	long N;
	scanf("%d", &N);
	long a[1000000];
	for (int i = 0; i < N; i++) {
		scanf(" %ld", &a[i]);
	}
	long s = a[0], b = a[0];
	for (int i = 1; i < N;i++){
		if (a[i] < s) s = a[i];
		if (a[i] > b) b = a[i];
	}
	printf("%ld %ld", s, b);
}
