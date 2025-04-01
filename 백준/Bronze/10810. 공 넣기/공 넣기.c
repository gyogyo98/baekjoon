#include <stdio.h>

int main(void) {

	int N, M;
	int a[100];
	scanf("%d %d", &N, &M);
	int d, b, c;
	for (int j = 0; j < N; j++) {
		a[j] = 0;
		
	}
	for (int j = 0; j < M; j++) {
		scanf("%d %d %d", &d, &b, &c);
		for (int i = d - 1; i <= b - 1; i++) {
			a[i] = c;
		}
	}

	for (int i = 0; i < N;i++){
		printf("%d ", a[i]);
	}

}