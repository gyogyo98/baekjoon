#include <stdio.h>


int main(void) {

	int b;
	char N[100];

	long long result = 0;
	scanf("%s %d", &N, &b);


	
	for (int i = 0; N[i] != '\0'; i++) {
		int d;
	
		if ('0' <= N[i] && N[i] <= '9') {
			d = N[i] - '0';
		}
		else if ('A' <= N[i] && N[i] <= 'Z') {
			d = N[i] - 'A' + 10;
		}
		result = result * b + d;
	
	}
	printf("%lld", result);

	return 0;
}