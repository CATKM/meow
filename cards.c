/* 
* �׸鰡��  ����ϴ� ���α׷�.
*�� �ڵ�� ������ ���� ���̼����� �����Ͽ� �����մϴ�.
* (c)2014 ���� ���� ��.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	char card_name[3];
	int count = 0;
	while (card_name[0] != 'X') {
		puts("ī�� �̸��� �Է��ϼ���: ");
		scanf("%2s", card_name);
		int val = 0;
		switch(card_name[0]) {
			case 'K':
			case 'Q':
			case 'J':
				val = 10;
				break;
			case 'A':
				val = 11;
				break;
			case 'X':
				continue;
			default:
				val = atoi(card_name);
				if ((val < 1) || (val > 11)) {
					puts("�߸��� ���� �Է��ϼ̽��ϴ�.");
				}
		}
		printf("ī�尪�� ������ �����ϴ�: %i\n", val);
		if ((val >= 3) && (val <= 6)) {
			puts("ī��Ʈ�� �ϳ� �ø��ϴ�");
			count++;
		}
		else if (val == 10) {
			puts("ī��Ʈ�� �ϳ� �����ϴ�");
			count--;
		}
		printf("���� ī��Ʈ: %i\n", count);
	}
	return 0;
}