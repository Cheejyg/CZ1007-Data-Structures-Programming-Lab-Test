#include <stdio.h>
void specialNumbers(int ar[], int limit, int *size);
void main() {
	int a[20], i, limit, size = 0;
	printf("Enter the limit: ");
	scanf("%d", &limit);
	specialNumbers(a, limit, &size);
	printf("specialNumbers(): ");
	for (i = 0; i < size; i++) {
		printf("%d ", a[i]);
	}

}
void specialNumbers(int ar[], int limit, int *size) {
	/* Write your code here */
	int x;

	//for (x = 0; x <= limit; x++) { //should 000 be considered as a special number? 0^3 + 0^3 + 0^3
	for (x = 100; x <= limit; x++) {
		int a, b, c;
		int D;

		a = x % 10;
		b = (x / 10) % 10;
		c = (x / 100) % 10;

		D = (a * a * a) + (b * b * b) + (c * c * c);
		if (x == D) {
			ar[*size] = x;
			*(size) = *(size)+1;
		}
	}
}
