#include <stdio.h>
int minOfMax(int ar[4][4]);
void main() {
	int a[4][4], row, col, min;

	printf("Enter a matrix (4x4): \n");
	for (row = 0; row < 4; row++) {
		for (col = 0; col < 4; col++) {
			scanf("%d", &a[row][col]);
		}
	}
	min = minOfMax(a);
	printf("Minimum is: %d\n", min);

}
int minOfMax(int ar[4][4]) {
	/* write your code here */
	int x, y;
	int min, max[4];

	for (x = 0; x < 4; x++) {
		min = ar[x][0];
		for (y = 0; y < 4; y++) {
			if (ar[x][y] > min) {
				min = ar[x][y];
			}/*if (ar[x][y] < min) {
				min = ar[x][y];
			}*/
		}
		max[x] = min;
	}

	min = max[0];

	for (x = 0; x < 4; x++) {
		if (max[x] < min) {
			min = max[x];
		}
	}

	return min;
}