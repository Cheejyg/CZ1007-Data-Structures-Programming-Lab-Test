#include <stdio.h>
int compareStr(char *s, char *t);
void main() {
	char a[80], b[80];
	printf("Enter the first string: ");
	gets(a);
	printf("Enter the second string: ");
	gets(b);
	printf("compareStr(): %d", compareStr(a, b));

}
int compareStr(char *s, char *t) {
	int x, temp = 0;

	/*while (*(s + x) != '\0' || *(t + x) != '0') {
		if (*(s + x) != *(t + x)) {
			temp = (*(s + x) - *(t + x));
			break;
		}
		x++;
	}*/
	for (x = 0; x < 80; x++) {
		if (*(s + x) != *(t + x)) {
			temp = (*(s + x) - *(t + x));
			break;
		}
	}

	return temp;
}