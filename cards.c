/* 
* 액면가를  계산하는 프로그램.
*이 코드는 베가스 공개 라이센스를 적용하여 공개합니다.
* (c)2014 대학 블랙잭 팀.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	char card_name[3];
	int count = 0;
	while (card_name[0] != 'X') {
		puts("카드 이름을 입력하세요: ");
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
					puts("잘못된 값을 입력하셨습니다.");
				}
		}
		printf("카드값은 다음과 같습니다: %i\n", val);
		if ((val >= 3) && (val <= 6)) {
			puts("카운트를 하나 올립니다");
			count++;
		}
		else if (val == 10) {
			puts("카운트를 하나 내립니다");
			count--;
		}
		printf("현재 카운트: %i\n", count);
	}
	return 0;
}