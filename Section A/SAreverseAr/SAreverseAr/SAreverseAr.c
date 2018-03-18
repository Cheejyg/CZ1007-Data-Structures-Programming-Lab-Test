#include <stdio.h>
void reverseAr(int ar[], int size);
void main() {
	int ar[80], size, i;

	printf("Enter array size: ");
	scanf("%d", &size);
	printf("Enter %d data: ", size);
	for (i = 0; i <= size - 1; i++) {
		scanf("%d", &ar[i]);
	}
	reverseAr(ar, size);
	printf("reverseAr(): ");
	if (size > 0) {
		for (i = 0; i < size; i++) {
			printf("%d ", ar[i]);
		}
	}
}
void reverseAr(int ar[], int size) {
	/* Write your code here */
	int x, temp;

	for (x = 0; x < size / 2; x++) {
		temp = ar[x];
		ar[x] = ar[size - 1 - x];
		ar[size - 1 - x] = temp;
	}
	//return;
}