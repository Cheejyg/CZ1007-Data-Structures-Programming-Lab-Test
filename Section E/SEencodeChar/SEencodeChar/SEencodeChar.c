#include <stdio.h>
typedef struct {
	char source;
	char code;
} Rule;
void encodeChar(char *s, char *t);
int main() {
	char s[80], t[80];
	printf("Source string: ");
	scanf("%s", s);
	encodeChar(s, t);
	printf("Encoded string: %s", t);
	return 0;
}
void encodeChar(char *s, char *t) {
	/* Write your code here */
	int x = 0;

	while (*(s+x) != '\0') {
		if (*(s + x) == 'a') {
			*(t + x) = 'd';
		}
		else if (*(s + x) == 'b') {
			*(t + x) = 'z';
		}
		else if (*(s + x) == 'z') {
			*(t + x) = 'a';
		}
		else if (*(s + x) == 'd') {
			*(t + x) = 'b';
		}
		else {
			*(t + x) = *(s + x);
		}
		x++;
	}

	*(t + x) = '\0';
}