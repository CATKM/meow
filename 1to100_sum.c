/* 1���� 100���� ���ϱ�! */

#include <stdio.h>
int main () {
	int x;
	int sum = 0;
	for(x = 1; x <= 100; x++) {
		sum = sum + x;
	}
	printf("1 ���� 100���� ���� ���� %i�Դϴ�.\n", sum);
	return 0;
}