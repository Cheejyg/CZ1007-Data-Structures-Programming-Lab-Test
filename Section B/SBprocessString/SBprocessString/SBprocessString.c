#include <stdio.h>
void processString(char *str, int *totVowels, int *totDigits);
void main() {
	char str[50];
	int totVowels, totDigits;

	printf("Enter the string: ");
	gets(str);
	processString(str, &totVowels, &totDigits);
	printf("Total vowels = %d\n", totVowels);
	printf("Total digits = %d\n", totDigits);

}
void processString(char *str, int *totVowels, int *totDigits) {
	/* Write your code here */
	int x = 0;
	*totVowels = 0;
	*totDigits = 0;

	while (*(str + x) != '\0') {
		char temp = *(str + x);
		if (*(str + x) == 'a' || *(str + x) == 'e' || *(str + x) == 'i' || *(str + x) == 'o' || *(str + x) == 'u') {
			*totVowels = (*totVowels) + 1;
		}
		if (*(str + x) == 'A' || *(str + x) == 'E' || *(str + x) == 'I' || *(str + x) == 'O' || *(str + x) == 'U') {
			(*totVowels) = (*totVowels) + 1;
		}
		if (*(str + x) >= '0' && *(str + x) <= '9') {
			(*totDigits)++;
		}
		x++;
	}
}