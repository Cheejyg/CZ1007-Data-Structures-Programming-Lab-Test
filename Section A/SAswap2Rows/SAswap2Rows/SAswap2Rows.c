#include <stdio.h>
#define SIZE 3
void swap2Rows(int M[SIZE][SIZE], int r1, int r2);
void display(int M[SIZE][SIZE]);
void main() {
	int ar[SIZE][SIZE];
	int row1, row2, i, j;

	printf("Enter the matrix row by row: \n");
	for (i = 0; i < SIZE; i++) {
		for (j = 0; j < SIZE; j++) {
			scanf("%d", &ar[i][j]);
		}
	}
	printf("Enter two rows for swapping: ");
	scanf("%d %d", &row1, &row2);
	swap2Rows(ar, row1, row2);
	printf("The array is: \n");
	display(ar);

}
void display(int M[SIZE][SIZE]) {
	int l, m;
	for (l = 0; l < SIZE; l++) {
		for (m = 0; m < SIZE; m++) {
			printf("%d ", M[l][m]);
		}
		printf("\n");
	}
}
void swap2Rows(int M[SIZE][SIZE], int r1, int r2) {
	/* write your code here */
	int x;
	int temp[SIZE];

	for (x = 0; x < SIZE; x++) {
		temp[x] = M[r1][x];
	}
	for (x = 0; x < SIZE; x++) {
		M[r1][x] = M[r2][x];
	}
	for (x = 0; x < SIZE; x++) {
		M[r2][x] = temp[x];
	}
}