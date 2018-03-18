#include <stdio.h>
int findSubstring(char *str, char *substring);
void main() {
	char str[40], substr[40];

	printf("Enter the string: ");
	gets(str);
	printf("Enter the substring: ");
	gets(substr);
	printf("findSubstring(): %d\n", findSubstring(str, substr));
}
int findSubstring(char *str, char *substr) {
	/* Write your code here */
	int x, y, z;
	x = 0; y = 0; z = -1;

	while (*(str + x) != '\0') {
		if (*substr == *(str + x)) {
			z = 1;

			while (*(substr + 1 + y) != '\0') {
				z = *(substr + 1 + y) != *(str + x + 1 + y) ? -1 : 1;

				if (z < 0) {
					break;
				}

				y++;
			}
		}

		if (z > 0) {
			return x + 1;
		}

		x++;
	}

	return z;
}