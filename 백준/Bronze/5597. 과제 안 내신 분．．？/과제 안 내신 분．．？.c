#include <stdio.h>

int main(void) {

	int a[30];
	int b, c;

	for (int j = 0; j < 28; j++) {
		scanf("%d", &a[j]);
	}
	for (int j = 1; j <= 30; j++) {
		int cnt = 0;
		for (int i = 0; i < 30; i++)
		{
			if (a[i] == j) break;
			cnt++;
		}
		if (cnt == 30) printf("%d\n", j);

	}
}

