/* �Ƕ�̵� ����! �������! */

#include <stdio.h>

int main () {
	int x;
	int y;
	for(x = 0; x < 5; x++) {
		for(y = 0; y <= x; y++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}