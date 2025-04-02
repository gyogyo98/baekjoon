#include <stdio.h>

int main(void) {

	char i[1000];
	int a;
	scanf("%s", &i);
	scanf("%d", &a);

	printf("%c\n", i[a-1]);
}