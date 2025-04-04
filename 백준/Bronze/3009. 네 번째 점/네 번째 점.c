#include <stdio.h>

int main(void) {

	int x[3], y[3];
	
	int xr, yr;

	for (int i = 0; i < 3; i++) {
		scanf("%d %d", &x[i], &y[i]);
	}
	int xp, yp;

	for (int i = 0; i < 2; i++) {
		for (int j = i + 1; j < 3; j++) {
			if (x[i] == x[j]) xp = i + j;
			if (y[i] == y[j]) yp = i + j;
		}

	}
	xr = x[3 - xp];
	yr = y[3 - yp];

	printf("%d %d", xr, yr);
}
