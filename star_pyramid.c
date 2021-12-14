/* 피라미드 만들기 과제! */

#include <stdio.h>

int main () {
	int x;
	int y;
	int z;
	for(x = 0; x < 5; x++) {
		for(y = x; y <= 5-1; y++) {
			printf(" ");
		}
		for(z = 0; z <= (x*2); z++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}