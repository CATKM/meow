/* 구구단 출력!*/

#include <stdio.h>
int main() {
	int x = 0;
	int y = 0;
	for(x=2; x <= 9; x++) {
		for(y=1; y <= 9; y++) {
			int answer = x * y;
			printf("%i x %2i = %3i\n", x, y, answer);
		}
	}
	return 0;
}