
#include <stdio.h>

int main(void) {

	char s[100];
	int N;
	scanf("%d", &N);
	int cnt = N;
	for (int k = 0; k < N; k++) {
		int a = 0;
		scanf("%s", &s);
		for (int i = 0; i < 100; i++) {
			if (s[i] != 0) a++;
			else break;
		}
		int p = a;


		for (int i = 0; i < a - 1; i++) {
			for (;;) {

				if (s[i] == 0) break;
				else if (s[i] == s[i + 1]) {
					p--;
					for (int j = i + 1; j < a; j++) {
						s[j] = s[j + 1];
					}
				}
				else break;
			}
		}
		int cntt = 0;
		for (int i = 0; i < p; i++) {
			for (int j = i + 1; j < p; j++) {
				if (s[i] == s[j]) cntt++;
			}
		}
		if (cntt > 0)cnt--;
	}
	printf("%d\n", cnt);



}