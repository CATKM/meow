/* 피라미드 과제! 쉬운버전! */

#include <stdio.h>

int main () {
	int x;
	int y;
	for(x = 5; x > 0; x--) {
		for(y = 0; y < x;  y++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}