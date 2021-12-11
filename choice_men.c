/* 청춘남녀 게임! */

#include <stdio.h>

int main () {
	int contestants[] = {1, 2, 3};
	int *choice = contestants;
	contestants[0] = 2;
	contestants[1] = contestants[2];
	contestants[2] = *choice;
	printf("나는 참가자 %i번을 선택할거야.\n", contestants[2]);
	return 0;
}