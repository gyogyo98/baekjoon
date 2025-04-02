#include <stdio.h>

int main(void) {

	char s[100];
	int a=0;
	scanf("%s", &s);
	for (int i = 0; i < 100; i++) {
		if (s[i] != 0) a++;
		else break;
	}

	printf("%d\n", a);
}
