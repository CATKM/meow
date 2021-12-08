/* 
* 구구단 출력!
* 원하는 단을 선택해서 출력!
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	int x = 0;
	int meow = 0;
	char select[2];
	puts("출력하고 싶은 단은 몇단입니까?:");
	scanf("%s", select);
	printf("%s단 입니다.\n", select);
	meow = atoi(select);
	for(x=1; x <= 9; x++) {
		int answer = meow * x;
		printf("%i x %2i = %3i\n", meow, x, answer);
	}
	return 0;
}