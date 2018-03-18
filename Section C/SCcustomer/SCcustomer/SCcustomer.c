#include <stdio.h>
#include <string.h>
struct account {
	struct
	{
		char lastName[10];
		char firstName[10];
	} names;
	int accountNum;
	double balance;
};
void nextCustomer(struct account *acct);
void printCustomer(struct account acct);
void main() {
	struct account record;
	int flag = 0;
	do {
		nextCustomer(&record);
		if ((strcmp(record.names.firstName, "End") == 0) && (strcmp(record.names.lastName, "Customer") == 0)) {
			flag = 1;
		}
		if (flag != 1) {
			printCustomer(record);
		}
	} while (flag != 1);

}
void nextCustomer(struct account *acct) {
	/* write your code here */
	char temp;

	printf("Enter names (firstName lastName): ");
	scanf("%s %s", (*acct).names.firstName, (*acct).names.lastName);
	scanf("%c", &temp);
	if (!(strcmp((*acct).names.firstName, "End") == 0 && (strcmp((*acct).names.lastName, "Customer") == 0))) {
		printf("Enter account number: ");
		scanf("%d", &((*acct).accountNum));
		scanf("%c", &temp);
		printf("Enter balance: ");
		scanf("%lf", &((*acct).balance));
		scanf("%c", &temp);
	}
}
void printCustomer(struct account acct) {
	/* write your code here */
	printf("Customer record: %s %s %d %lf\n", acct.names.firstName, acct.names.lastName, acct.accountNum, acct.balance);
}