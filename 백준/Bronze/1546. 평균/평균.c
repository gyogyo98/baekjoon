#include <stdio.h>

int main(void) {

	int N;
	float M=0, k=0;
	float a[1000];
	scanf("%d", &N);

	for (int j = 0; j < N; j++) {
		scanf("%f", &a[j]);
	}

	for (int j = 0; j < N; j++) {
		if (a[j] > M) M = a[j];
	}
	for (int j = 0; j < N; j++) {
		a[j] = (a[j] * 100) / M;
	}


	for (int i = 0; i < N; i++) {
		k += a[i];
	}
	k = k / N;

	printf("%f\n", k);
}