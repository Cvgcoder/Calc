#include <stdio.h>
#include <math.h>
void main() {
	int op;
	double a, b, r;
	printf("1.\taddition\n2.\tsubtraction\n3.\tmultiplication\n4.\tdivision\n5.\tpower\n6.\tsqare root\n");
	scanf_s("%d", &op);
	if (op != 6) {
		printf("enter first number:\n");
		scanf_s("%lf", &a);
		printf("enter second number:\n");
		scanf_s("%lf", &b);
		switch (op) {
		case 1:
			r = a + b;
			break;
		case 2:
			r = a - b;
			break;
		case 3:
			r = a * b;
			break;
		case 4:
			r = a / b;
			break;
		case 5:
			r = pow(a, b);
			break;
		default:
			break;
		}
	}
	if (op == 6) {
		printf("enter the number\n");
		scanf_s("%lf", &a);
		r = sqrt(a);
	}
	printf("%lf\n", r);
	return main();
}