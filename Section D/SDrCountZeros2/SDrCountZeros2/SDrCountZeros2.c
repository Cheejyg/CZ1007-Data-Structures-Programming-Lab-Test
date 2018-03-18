#include <stdio.h>
int rCountZeros2(int num, int *result);
void main() {
	int number, result;
	printf("Enter a number: ");
	scanf("%d", &number);
	rCountZeros2(number, &result);
	printf("rCountZeros2(): %d\n", result);

}
int rCountZeros2(int num, int *result) {
	/* Write your code here */
	if (num < 10) {
		*result = num == 0 ? 1 : 0;
	}
	else {
		if (num % 10 == 0) {
			rCountZeros2(num / 10, result);
			*result = *result + 1;
		}
		else {
			rCountZeros2(num / 10, result);
		}
	}
}