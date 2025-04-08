#include <stdio.h>
int main(void) {

	int n;
	scanf("%d", &n);

	for (int i = 2; n > 1;) {
		if (n%i == 0) {
			printf("%d\n", i);
			n = n / i;
		}
		else i++;
	}
	return 0;
}