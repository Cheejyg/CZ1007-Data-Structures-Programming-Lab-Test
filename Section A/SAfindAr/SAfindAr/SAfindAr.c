#include <stdio.h>
int findAr(int size, int ar[], int target);
void main() {
	int ar[20];
	int size, i, target;

	printf("Enter array size: ");
	scanf("%d", &size);
	printf("Enter %d data: ", size);
	for (i = 0; i < size; i++) {
		scanf("%d", &ar[i]);
	}
	printf("Enter the target number: ");
	scanf("%d", &target);
	printf("findAr(): %d", findAr(size, ar, target));
}
int findAr(int size, int ar[], int target) {
	/* write your code here */
	int x;
	int t = -1;

	for (x = 0; x < size; x++) {
		if (ar[x] == target) {
			t = x;
			break;
		}
	}

	return t;
}
