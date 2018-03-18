#include <stdio.h>
#define SIZE 3
void transpose(int M[SIZE][SIZE]);
void display(int M[SIZE][SIZE]);
void main() {
	int ar[SIZE][SIZE];
	int i, j;

	printf("Enter the matrix row by row: \n");
	for (i = 0; i < SIZE; i++) {
		for (j = 0; j < SIZE; j++) {
			scanf("%d", &ar[i][j]);
		}
	}
	printf("transpose(): \n");
	transpose(ar);
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
void transpose(int M[SIZE][SIZE]) {
	/* Write your code here */
	int x, y;
	int temp[SIZE][SIZE];

	for (x = 0; x < SIZE; x++) {
		for (y = 0; y < SIZE; y++) {
			temp[x][y] = M[x][y];
		}
	}

	for (x = 0; x < SIZE; x++) {
		for (y = 0; y < SIZE; y++) {
			M[x][y] = temp[y][x];
		}
	}
}