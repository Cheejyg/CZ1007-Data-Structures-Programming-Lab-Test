#include <stdio.h>
void rSumup2(int n, int *result);
void main() {
	int n, result;
	printf("Enter a number: ");
	scanf("%d", &n);
	rSumup2(n, &result);
	printf("rSumup2(): %d", result);

}
void rSumup2(int n, int *result) {
	/* Write your code here */
	if (n == 1) {
		*result = 1;
	}
	else if (n > 1) {
		rSumup2(n - 1, result);
		*result += n;
	}
	else {
		*result = 0;
	}
}