#include <stdio.h>
void mergeStr(char *a, char *b, char *c);
void main() {
	char a[80], b[80];
	char c[80];

	printf("Enter first string: ");
	gets(a);
	printf("Enter second string: ");
	gets(b);
	mergeStr(a, b, c);
	printf("mergeStr(): ");
	puts(c);

}
void mergeStr(char *a, char *b, char *c) {
	/* Write your code here */
	int x, y, z;
	x = 0;
	y = 0;
	z = 0;
	char temp[160];

	while (*(a + x) != '\0') {
		*(c + x) = *(a + x);
		//temp[x] = *(a + x);
		x++;
	}
	while (*(b + y) != '\0') {
		*(c + x + y) = *(b + y);
		//temp[x + y] = *(b + y);
		y++;
	}
	c[x + y] = '\0';
	//temp[x + y] = '\0';
	/*while ((x + y) < 80) {
		//*(c + x + y) = '\0';
		temp[x + y] = '\0';
		y++;
	}*/

	z = x + y;

	//printf("length: %d", z);

	x = 0;
	y = 0;
	z = z;

	while (c[x] != '\0') {
		y = x;
		while (y < z) {
			if (c[x] > c[y]) {
				char tempC;
				tempC = c[x];
				c[x] = c[y];
				c[y] = tempC;
			}

			y++;
		}
		x++;
	}
	temp[x] = '\0';
	//c[z] = '\0';

	/*for (x = 0; x < z; x++) {
		c[x] = temp[x];
	}*/
	c[x] = '\0';

	/*target = '\1';
	while (target <= 'z') {
	//temp; target; x; y; z; *c;
		x = 0;
		while (temp[x] != '\0') {
			if (temp[x] >= '\1' && temp[x] <= 'z') { //is alphabet
				if (temp[x] == target) {
					*(c + y) = target;
					y++;
				}
			}
			x++;
		}
		target++;
	}

	*(c + y) = '\0';*/
}