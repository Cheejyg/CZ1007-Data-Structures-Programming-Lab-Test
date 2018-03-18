#include <stdio.h>
void findMinMax2D(int ar[5][5], int *min, int *max);
void main() {
	int A[5][5];
	int i, j, min, max;
	printf("Enter the matrix (5x5) row by row: \n");
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			scanf("%d", &A[i][j]);
		}
	}
	findMinMax2D(A, &min, &max);
	printf("min = %d; max = %d", min, max);

}
void findMinMax2D(int ar[5][5], int *min, int *max) {
	/* add your code here */
	int x, y;
	*min = ar[0][0];
	*max = ar[0][0];

	for (x = 0; x < 5; x++) {
		for (y = 0; y < 5; y++) {
			if (ar[x][y] < *min) {
				*min = ar[x][y];
			}
			if (ar[x][y] > *max) {
				*max = ar[x][y];
			}
		}
	}
}