
#include <stdio.h>

int main(void) {

	int x, y, z;

	scanf("%d %d %d", &x, &y, &z);

	int tmp, tmp2;
	if (x > y) {
		tmp = x;
		x = y;
		y = tmp;
	}
	if (x > z) {
		tmp = z;
		z = y;
		tmp2 = x;
		x = tmp;
		y = tmp2;
	}
	else if (z >= x && y > z) {
		tmp = z;
		z = y;
		y = tmp;
	}

	if (x + y <= z) printf("%d", 2 * (x + y) - 1);
	else printf("%d", x + y + z);

}
