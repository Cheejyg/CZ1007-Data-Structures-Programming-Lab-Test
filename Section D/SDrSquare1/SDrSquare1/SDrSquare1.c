#include <stdio.h>
int rSquare1(int num);
void main() {
	int x;
	printf("Enter a number: ");
	scanf("%d", &x);
	printf("rSquare1(): %d", rSquare1(x));

}
int rSquare1(int num) {
	/* Write your code here */
	/*if (num < 2) {
		return 1;
	}
	else {
		return rSquare1(num- 1) + (num*2-1);
	}*/
	return num < 2 ?  1 : rSquare1(num - 1) + (num * 2 - 1);
}