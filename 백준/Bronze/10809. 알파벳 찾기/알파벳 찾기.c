#include <stdio.h>

int main(void) {

	char s[100];
	int b[26];
	scanf("%s", &s);
	int cnt = 0;
	for (int i = 0; i < 100; i++) {
		if (s[i] == 0) break;
		cnt++;
	}
	for (int i = 0; i < 26; i++) {
		b[i] = -1;
	}

	int k = 0;
	for (char j = 'a'; j <= 'z'; j++) {
		for (int i = 0; i < cnt; i++) {
			if (j == s[i]) {
				b[k] = i;
				break;
			}
		}
		k++;
	}

	for (int i = 0; i < 26; i++) {
		printf("%d ", b[i]);
	}

}
