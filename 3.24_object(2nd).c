/* 2022.3.24 2���� ����!
* 20221426 Ȳ����! */

#include <stdio.h>

int main() {
	int a = 0;
	int b = 0;
	scanf_s("%d%d", &a, &b);
	printf("a + b = %d\n", a + b);
	printf("a - b = %d\n", a - b);
	printf("a * b = %d\n", a * b);
	printf("a / b = %d\n", a / b);
	printf("a / b (������) = %d\n", a % b);
	float c = 0;
	float d = 0;
	scanf_s("%f%f", &c, &d);
	printf("c + d = %g\n", c + d);
	printf("c - d = %g\n", c - d);
	printf("c * d = %g\n", c * d);
	printf("c / d = %g\n", c / d);
	return 0;
}