/* 
* ������ ���!
* ���ϴ� ���� �����ؼ� ���!
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	int x = 0;
	int meow = 0;
	char select[2];
	puts("����ϰ� ���� ���� ����Դϱ�?:");
	scanf("%s", select);
	printf("%s�� �Դϴ�.\n", select);
	meow = atoi(select);
	for(x=1; x <= 9; x++) {
		int answer = meow * x;
		printf("%i x %2i = %3i\n", meow, x, answer);
	}
	return 0;
}