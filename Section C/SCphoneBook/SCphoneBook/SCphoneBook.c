#include <stdio.h>
#include <string.h>
#define MAX 100
typedef struct {
	char name[20];
	char telno[20];
} PhoneBk;
int readin(PhoneBk *p);
void search(PhoneBk *p, int size, char *target);
void main() {
	PhoneBk s[MAX];
	char t[20];
	int size;
	size = readin(s);
	printf("Enter search name: ");
	gets(t);
	search(s, size, t);

}
int readin(PhoneBk *p) {
	/* write your code here */
	int x = 0;
	char temp;

	do {
		printf("Enter name: ");
		gets((*(p + x)).name);
		if (strcmp((*(p + x)).name, "#") == 0) {
			break;
		}
		printf("Enter tel: ");
		gets((*(p + x)).telno); //telno is a char array (string)
		//scanf("%c", &temp);
		x++;
	} while (strcmp((*(p + x)).name, "#") != 0 && x < MAX);

	return x;
}
void search(PhoneBk *p, int size, char *target) {
	/* write your code here */
	int x, y = 0;

	for (x = 0; x < size; x++) {
		if (strcmp((*(p+x)).name, target) == 0) {
			y = 1;
			printf("Name = %s, Tel = %s", (*(p + x)).name, (*(p + x)).telno);
			break;
		}
	}
	if (y == 0) {
		printf("Name not found!");
	}
}