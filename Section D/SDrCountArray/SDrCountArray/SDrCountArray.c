#include <stdio.h>
#define SIZE 20
int rCountArray(int array[], int n, int a);
void main() {
	int array[SIZE];
	int index, count, target, size;

	printf("Enter array size: ");
	scanf("%d", &size);
	printf("Enter %d numbers: ", size);
	for (index = 0; index < size; index++) {
		scanf("%d", &array[index]);
	}
	printf("Enter the target: ");
	scanf("%d", &target);
	count = rCountArray(array, size, target);
	printf("rCountArray(): %d\n", count);

}
int rCountArray(int array[], int n, int a) {
	/* Write your code here */
	if (n == 1) {
		return array[n - 1] == a ? 1 : 0;
	}
	else {
		if (array[n - 1] == a) {
			return rCountArray(array, n - 1, a) + 1;
		}
		else {
			return rCountArray(array, n - 1, a);
		}
	}
}