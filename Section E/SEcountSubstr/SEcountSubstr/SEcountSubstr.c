#include <stdio.h>
int countSubstr(char str[], char substr[]);
void main() {
	char str[80], substr[80];
	printf("Enter the string: ");
	gets(str);
	printf("Enter the substring: ");
	gets(substr);
	printf("countSubstr(): %d\n", countSubstr(str, substr));

}
int countSubstr(char str[], char substr[]) {
	/* Write your code here */
	int x, y, z;
	x = 0;
	y = 0;
	z = 0;
	int i = 0;

	while (str[x] != '\0') {
		//printf("%d\n", x);
		y = 0; z = 0;

		if (str[x] == substr[y]) {
			while (substr[y] != '\0') {
				z = str[x + y] == substr[y] ? 1 : 0;
				y++;
			}
			if (z == 1) {
				i++;
				/*break;*/
			}
		}
		x++;
	}

	return i;

	/*if (z == 1) {
		return x + 1;
	}
	return 0;*/
}