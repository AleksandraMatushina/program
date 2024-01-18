#include <stdio.h>
#include <math.h>

void ur(double a, double b, double c, int* numRoots, double* root1, double* root2) {
	double d = b * b - 4 * a * c;

	if (d > 0) {
		*numRoots = 2;
		*root1 = (-b + sqrt(d)) / (2 * a);
		*root2 = (-b - sqrt(d)) / (2 * a);
	}
	 else if (d == 0) {
		*numRoots = 1;
		*root1 = -b / (2 * a);
		*root2 = *root1;
	}
	 else {
		*numRoots = 0;
	}
}

int main() {
	double a, b, c;
	int numRoots;
	double root1, root2;

	printf("a*x^2+b*x+c=0\n");
	printf("a=");
	scanf("%lf", &a);
	printf("b=");
	scanf("%lf", &b);
	printf("c=");
	scanf("%lf", &c);

	ur(a, b, c, &numRoots, &root1, &root2);
	if (numRoots == 2) {
		printf("Количество корней: %d\n", numRoots);
		printf("Корень 1: %.2f\n", root1);
		printf("Корень 2: %.2f\n", root2);
	}
	 else if (numRoots == 1) {
		printf("Количество корней: %d\n", numRoots);
		printf("Корень: %.2f\n", root1);
	}
	 else {

		printf("Количество корней: %d\n", numRoots);
	}

	return 0;
}
