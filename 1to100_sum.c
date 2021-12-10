/* 1부터 100까지 더하기! */

#include <stdio.h>
int main () {
	int x;
	int sum = 0;
	for(x = 1; x <= 100; x++) {
		sum = sum + x;
	}
	printf("1 부터 100까지 더한 수는 %i입니다.\n", sum);
	return 0;
}