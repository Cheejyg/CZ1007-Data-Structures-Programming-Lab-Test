#include <stdio.h>
#include <math.h>
float aSum(int size, float vector[]);
void main() {
	float vector[10];
	int i, size;

	printf("Enter vector size: ");
	scanf("%d", &size);
	printf("Enter %d data: ", size);
	for (i = 0; i < size; i++) {
		scanf("%f", &vector[i]);
	}
	printf("aSum(): %f", aSum(size, vector));
}
float aSum(int size, float vector[]) {
	/* write your code here */
	int x;
	float sum = 0.0;

	for (x = 0; x < size; x++) {
		sum += fabs(vector[x]);
		/*

		sum += fabs(vector[x]);

		OR

		sum += vector[x] < 0 ? vector[x] * -1.0 : vector[x];
		
		OR
		
		if(vector[x] < 0) {
			sum += vector[x] * -1.0;
		}
		else {
			sum += vector[x];
		}

		*/
	}

	return sum;
}