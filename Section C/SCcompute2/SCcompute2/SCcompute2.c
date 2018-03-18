#include <stdio.h>
typedef struct {
	float operand1, operand2;
	char op;
} bexpression;
float compute2(bexpression *expr);
void main() {
	bexpression e;
	printf("Enter expression (op1 op2 op) : ");
	scanf("%f %f %c", &e.operand1, &e.operand2, &e.op);
	printf("compute2 = %f\n", compute2(&e));

}
float compute2(bexpression *expr) {
	/* Write your code here */
	switch ((*expr).op) {
		case '+':
			return (*expr).operand1 + (*expr).operand2;
			break;
		case '-':
			return (*expr).operand1 - (*expr).operand2;
			break;
		case '*':
			return (*expr).operand1 * (*expr).operand2;
			break;
		case '/':
			return (*expr).operand1 / (*expr).operand2;
			break;
		default:
			return 0;
			break;
	}
}