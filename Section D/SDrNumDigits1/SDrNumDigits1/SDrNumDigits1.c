#include <stdio.h>
int rNumDigits1(int num);
void main() {
	int number;

	printf("Enter a number: ");
	scanf("%d", &number);
	printf("rNumDigits1(): %d\n", rNumDigits1(number));

}
int rNumDigits1(int num) {
	/* Write your code here */
	if (num < 10) {
		return 1;
	}
	else {
		return rNumDigits1(num / 10) + 1;
	}
}