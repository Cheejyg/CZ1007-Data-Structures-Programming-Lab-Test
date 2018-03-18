#include <stdio.h>
#include <string.h>
#include <ctype.h>
char *cipher(char *s);
char *decipher(char *s);
void main() {
	char str[80], *q;

	printf("Enter a string: ");
	gets(str);
	printf("To cipher: %s -> ", str);
	q = cipher(str);
	printf("%s\n", str);
	printf("To decipher: %s -> ", str);
	q = decipher(str);
	printf("%s\n", str);

}
char *cipher(char *s) {
	/* Write your code here */
	int x = 0;

	while (*(s + x) != '\0') {
		if (*(s + x) >= 'a' && *(s + x) <= 'z') {
			*(s + x) = *(s + x) + 1 > 'z' ? *(s + x) + 1 - 26 : *(s + x) + 1;
		}
		if (*(s + x) >= 'A' && *(s + x) <= 'Z') {
			*(s + x) = *(s + x) + 1 > 'Z' ? *(s + x) + 1 - 26 : *(s + x) + 1;
		}

		x++;
	}
}
char *decipher(char *s) {
	/* Write your code here */
	int x = 0;

	while (*(s + x) != '\0') {
		if (*(s + x) >= 'a' && *(s + x) <= 'z') {
			*(s + x) = *(s + x) - 1 < 'a' ? *(s + x) - 1 + 26 : *(s + x) - 1;
		}
		if (*(s + x) >= 'A' && *(s + x) <= 'Z') {
			*(s + x) = *(s + x) - 1 < 'A' ? *(s + x) - 1 + 26 : *(s + x) - 1;
		}

		x++;
	}
}
