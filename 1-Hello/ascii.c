#include <stdio.h>

int main() {
	char x = 72;
	char y = 105;
	char z = 33;

	printf("%c%c%c\n", x, y, z);

	char A = 'A';
	printf("%c, %c", A, A + 32);

	for (int i = 48; i <= 57; i++) {
		printf("%c", i);
	}
	return 0;
}