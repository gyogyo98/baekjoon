#include <stdio.h>
int main(void) {

	int n,m;
	int i,r;
	scanf("%d %d", &n, &m);
	int cnt = 0;
	for (i = 1; i <= n; i++) {
		if (n%i == 0) {
			r = i;
			cnt++;
		}
		if (cnt == m) { 
			printf("%d", r);
			break; 
		}
	}
	if(cnt !=m) printf("0");


	return 0;
}