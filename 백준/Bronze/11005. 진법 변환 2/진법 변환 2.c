#include <stdio.h>
int main(void) {

	long long int a;
	long long int n;
	scanf("%lld %lld", &a, &n);
	long long int b[1000];

	int i;
	int cnt = 0;
	for (i = 0; a > 0; i++) {
		b[i] = a % n;
		a = a / n;
		cnt++;
	}
	
	for (i = 0; i < cnt; i++) {
		if (0 <= b[cnt - i - 1] && b[cnt - i - 1] <= 9) printf("%lld", b[cnt - i - 1]);
		else if (10 <= b[cnt - i - 1] && b[cnt - i - 1] <= 35) printf("%c", b[cnt - i - 1] -10+'A');
	}


}