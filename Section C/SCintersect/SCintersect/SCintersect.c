#include <stdio.h>
#include <math.h>
struct circle {
	double radius;
	double x;
	double y;
};
int intersect(struct circle, struct circle);
void main() {
	struct circle c1, c2;
	printf("Enter circle 1 (radius x y): ");
	scanf("%lf %lf %lf", &c1.radius, &c1.x, &c1.y);
	printf("Enter circle 2 (radius x y): ");
	scanf("%lf %lf %lf", &c2.radius, &c2.x, &c2.y);
	printf("Circle intersection: %d\n", intersect(c1, c2));

}
int intersect(struct circle c1, struct circle c2) {
	/* Write your code here */
	double x, y;

	x = c1.x - c2.x;
	y = c1.y - c2.y;

	return sqrt(pow(x, 2) + pow(y, 2)) <= c1.radius + c2.radius;
}