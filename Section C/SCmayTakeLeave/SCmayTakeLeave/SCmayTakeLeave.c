#include <stdio.h>
typedef struct {
	int id; /* staff identifier */
	int totalLeave; /* the total number of days of leave allowed */
	int leaveTaken; /* the number of days of leave taken so far */
} leaveRecord;
int mayTakeLeave(leaveRecord list[], int id, int leave, int n);
void getInput(leaveRecord list[], int *n);
void printList(leaveRecord list[], int n);
void main() {
	leaveRecord listRec[10];
	int len;
	int id, leave, canTake = -1;
	getInput(listRec, &len);
	printList(listRec, len);
	printf("Please input id, leave to be taken: ");
	scanf("%d %d", &id, &leave);
	canTake = mayTakeLeave(listRec, id, leave, len);
	if (canTake != 0) {
		printf("The staff %d can take leave\n", id);
	}
	else {
		printf("The staff %d cannot take leave\n", id);
	}

}
void getInput(leaveRecord list[], int *n) {
	int total;

	*n = 0;
	printf("Enter the number of staff records: ");
	scanf("%d", &total);
		while ((*n) != total) {
			printf("Enter id, totalleave, leavetaken: ");
			scanf("%d %d %d", &list[*n].id, &list[*n].totalLeave, &list[*n].leaveTaken);
			(*n)++;
		}
}
void printList(leaveRecord list[], int n) {
	int p;

	printf("The staff list:\n");
	for (p = 0; p < n; p++) {
		printf("id = %d, totalleave = %d, leave taken = %d\n", list[p].id, list[p].totalLeave, list[p].leaveTaken);
	}
}
int mayTakeLeave(leaveRecord list[], int id, int leave, int n) {
	/* write your code here */
	int x;

	for (x = 0; x < n; x++) {
		if (list[x].id == id) {
			return list[x].totalLeave - list[x].leaveTaken - leave >= 0;
			break;
		}
	}

	return -1;
}