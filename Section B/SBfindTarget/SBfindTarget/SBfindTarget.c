#include <stdio.h>
#include <string.h>
#define SIZE 10
int findTarget(char *target, char nameptr[SIZE][80], int size);
void main() {
	char nameptr[SIZE][80];
	char t[40];
	int i, result, size;
	int temp;

	printf("Enter no. of names: ");
	scanf("%d", &size);
	printf("Enter %d names: ", size);
	for (i = 0; i < size; i++) {
		scanf("%s", nameptr[i]);
	}
	printf("Enter target name: ");
	scanf("\n");
	gets(t);
	result = findTarget(t, nameptr, size);
	printf("findTarget(): %d\n", result);

}
int findTarget(char *target, char nameptr[SIZE][80], int size) {
	/* Write your code here */
	int x;
	int y = -1;

	for (x = 0; x < SIZE; x++) {
		if (strcmp(target, nameptr[x]) == 0) {
			y = x;
			break;
		}
	}

	return y;
}