/*  */

#include <stdio.h>

int main() {
	int decks;
	puts("���� �󸶳� �ֽ��ϱ�?:");
	scanf("%i", &decks);
	if (decks < 1) {
		puts("�� ������ �ùٸ��� �ʽ��ϴ�.");
		return 1;
	}
	printf("�� %i���� ī�� %i���� �ֽ��ϴ�.\n", decks, (decks * 52));
	return 0;
}