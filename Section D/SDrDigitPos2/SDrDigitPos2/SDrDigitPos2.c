#include <stdio.h>
void rDigitPos2(int num, int digit, int *pos);
void main() {
	int number;
	int digit, result;

	printf("Enter a number: ");
	scanf("%d", &number);
	printf("Enter the digit: ");
	scanf("%d", &digit);
	rDigitPos2(number, digit, &result);
	printf("rDigitPos2(): %d", result);

}
void rDigitPos2(int num, int digit, int *pos) {
	/* Write your code here */
	if (num < 10) {
		if (num == digit) {
			*pos = 1;
		}
		else {
			*pos = 0;
		}
	}
	else {
		if (num % 10 == digit) {
			*pos = 1;
		}
		else {
			rDigitPos2(num / 10, digit, pos);
			if (*pos > 0) {
				*pos = *pos + 1;
			}
			else {
				*pos = 0;
			}
		}
	}
}