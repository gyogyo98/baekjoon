#include <stdio.h>

int main(void) {


	int a[9];
	for (int i = 0; i < 9; i++) {
		scanf("%d", &a[i]);
	}
	int k = a[0];
	int g=1;
	for (int i = 0; i < 9;i++){
		if (a[i] > k) {
			k = a[i];
			g = i+1;
		}
	}
	printf("%d\n%d", k, g);
}
