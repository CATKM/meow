/*  */

#include <stdio.h>

int main() {
	int decks;
	puts("덱이 얼마나 있습니까?:");
	scanf("%i", &decks);
	if (decks < 1) {
		puts("덱 갯수가 올바르지 않습니다.");
		return 1;
	}
	printf("덱 %i개와 카드 %i장이 있습니다.\n", decks, (decks * 52));
	return 0;
}