#include <stdio.h>
char *stringncpy(char *s1, char *s2, int n);
void main() {
	char sourceStr[40] = "source";
	char targetStr[40], *target;
	int length;

	printf("Enter a string: ");
	gets(sourceStr);
	printf("Enter the number of characters: ");
	scanf("%d", &length);
	target = stringncpy(targetStr, sourceStr, length);
	printf("stringcpy(): %s", target);

}
char *stringncpy(char *s1, char *s2, int n) {
	/* Write your code here */
	int x = 0;

	while (s2[x] != '\0' && x < n) {
		s1[x] = s2[x];
		x++;
	}
	while (x < n) {
		s1[x] = '\0';
		x++;
	}
	s1[x] = '\0';

	return s1;
}