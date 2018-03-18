#include <stdio.h>
int rLookupAr(int array[], int size, int target);
void main() {
	int numArray[80];
	int target, i, size;

	printf("Enter array size: ");
	scanf("%d", &size);
	printf("Enter %d numbers: ", size);
	for (i = 0; i < size; i++)
		scanf("%d", &numArray[i]);
	printf("Enter the target number: ");
	scanf("%d", &target);
	printf("rLoopupAr(): %d", rLookupAr(numArray, size, target));

}
int rLookupAr(int array[], int size, int target) {
	/* Write your code here */
	int x, y = -1;

	for (x = 0; x < size; x++) {
		if (array[x] == target) {
			y = x;
			//break;
		}
	}
	return y;
}