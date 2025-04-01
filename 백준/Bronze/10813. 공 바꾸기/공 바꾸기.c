#include <stdio.h>

int main(void) {

	int N, M;
	int a[100];
	scanf("%d %d", &N, &M);
	int b, c;
	for (int j = 0; j < N; j++) {
		a[j] = j+1;
		
	}
	int tmp;
	for (int j = 0; j < M; j++) {
		scanf("%d %d", &b, &c);
		tmp = a[b - 1];
		a[b - 1] = a[c - 1];
		a[c - 1] = tmp;
	}

	for (int i = 0; i < N;i++){
		printf("%d ", a[i]);
	}

}