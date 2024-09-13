#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void cypher(char* message, int shift) {
	char ch;
	int i;

	for (i = 0; message[i] != '\0'; i++) {
		ch = message[i];

		if (ch >= 'A' && ch <= 'Z') {
			ch = ch + shift;

			if (ch > 'Z') {
				ch = ch - 'Z' + 'A' - 1;
			}
			else if (ch < 'A') {
				ch = ch + 'Z' - 'A' + 1;
			}
		}
		if (ch >= 'a' && ch <= 'z') {
			ch = ch + shift;

			if (ch > 'z') {
				ch = ch - 'z' + 'a' - 1;
			}
			else if (ch < 'a') {
				ch = ch + 'z' - 'a' + 1;
			}
		message[i] = ch;
		}
	}
}

int main() {
	char message[100];

	printf("Enter a message : ");
	fgets(message, sizeof(message), stdin);

	int shift;
	printf("Enter shift value : ");
	scanf("%d", &shift);

	cypher(message, shift);

	printf("Encrypted! %s" ,message);
	return 0;
}