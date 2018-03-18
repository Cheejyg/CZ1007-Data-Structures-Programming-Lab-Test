#include <stdio.h>
#include <string.h>
struct student {
	char name[20]; /* student name */
	double testScore; /* test score */
	double examScore; /* exam score */
	double total; /* total score = (testScore+examScore)/2 */
};
double average();
void main() {
	printf("average(): %f\n", average());

}
double average() {
	/* Write your code here */
	struct student students[50];
	int x = 0;
	double total = 0.0;
	char temp;

	do {
		printf("Enter student name: ");
		gets(students[x].name);
		if (strcmp(students[x].name, "END") == 0) { break; }
		printf("Enter test score: ");
		scanf("%lf", &students[x].testScore);
		scanf("%c", &temp);
		printf("Enter exam score: ");
		scanf("%lf", &students[x].examScore);
		scanf("%c", &temp);
		students[x].total = (students[x].testScore + students[x].examScore) / 2.0;
		printf("Student %s total = %lf\n", students[x].name, students[x].total);
		total += students[x].total;

		x++;
	} while (strcmp(students[x].name, "END") != 0 && x < 50);

	return x > 0 ? total / x : 0.0;
}