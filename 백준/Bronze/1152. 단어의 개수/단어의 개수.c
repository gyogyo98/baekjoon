#include <stdio.h>

int main(void) {

	int a=0;
	char s[1000000];
	gets(s);
	for (int i = 0; i < 1000000; i++) {
		if (s[i] != 0) a++;
		else break;
	}

	int cnt = 1;

	int cntt = 0;
	for (int i = 0; i < a; i++) {
		if (s[i] == ' ') cntt++;
	}
	if (cntt == a) {
		printf("%d\n", 0);
	}

	else {
		for (int i = 0; i < a; i++) {
			if (s[i] == ' ') {
				s[i] = 1;
			}
			else break;
		}
		for (int i = a - 1; i >= 0; i--) {
			if (s[i] == ' ') {
				s[i] = 1;
			}
			else break;
		}
		for (int j = 0; j < a; j++) {
			if (s[j] == ' ') cnt++;

		}

		printf("%d\n", cnt);
	}
}

