/*
* ���Ǳ� ���α׷�!
* �־��� ���� ������ ���ϰ��� �ϴ� ���ǵ��� ��鼭, ������ �ʹٸ� ���� ��ȯ!
* ���� ������Ʈ!
*/

#include <stdio.h>

int main () {
	int money = 3000;
	char select[2];
	printf("���� �����ϼ���: %i\n", money);
	while(select[0] != '0') {
		printf("[���Ǳ� �Ǹ� �޴�]");
		printf("1. �ݶ� ����: 500\n");
		printf("2. ���̴� ����: 400\n");
		printf("3. ���� ����: 300\n");
		printf("4. Ŀ�� ����: 700\n");
		puts("�޴� ��ȣ�� �����ϼ���. (����:0):");
		scanf("%s", select);
		switch(select[0]) {
			case '1':
				money = money - 500;
				puts("�ݶ� ���Խ��ϴ�.");
				break;
			case '2':
				money = money - 400;
				puts("���̴ٰ� ���Խ��ϴ�.");
				break;
			case '3':
				money = money - 300;
				puts("������ ���Խ��ϴ�.");
				break;
			case '4':
				money = money - 700;
				puts("Ŀ�ǰ� ���Խ��ϴ�.");
				break;	
			case '0':
				break;
			default:
				puts("�߸� �Է��ϼ̽��ϴ�.");
		}
		printf("���� ���� ���� %i �Դϴ�.\n", money);
	}
	printf("��ȯ ��ư�� �������ϴ�. %i���� ���Խ��ϴ�.\n", money);
}
		