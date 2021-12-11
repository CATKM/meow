/*
* 자판기 프로그램!
* 주어진 돈을 가지고 원하고자 하는 물건들을 사면서, 끝내고 싶다면 돈을 반환!
* 과제 프로젝트!
*/

#include <stdio.h>

int main () {
	int money = 3000;
	char select[2];
	printf("돈을 투입하세요: %i\n", money);
	while(select[0] != '0') {
		printf("[자판기 판매 메뉴]");
		printf("1. 콜라 가격: 500\n");
		printf("2. 사이다 가격: 400\n");
		printf("3. 생수 가격: 300\n");
		printf("4. 커피 가격: 700\n");
		puts("메뉴 번호를 선택하세요. (종료:0):");
		scanf("%s", select);
		switch(select[0]) {
			case '1':
				money = money - 500;
				puts("콜라가 나왔습니다.");
				break;
			case '2':
				money = money - 400;
				puts("사이다가 나왔습니다.");
				break;
			case '3':
				money = money - 300;
				puts("생수가 나왔습니다.");
				break;
			case '4':
				money = money - 700;
				puts("커피가 나왔습니다.");
				break;	
			case '0':
				break;
			default:
				puts("잘못 입력하셨습니다.");
		}
		printf("현재 남은 돈은 %i 입니다.\n", money);
	}
	printf("반환 버튼을 눌렀습니다. %i원이 나왔습니다.\n", money);
}
		