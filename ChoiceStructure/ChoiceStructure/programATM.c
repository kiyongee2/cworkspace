#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
    현금 자동 입출금기 프로그램
	- 예금, 출금, 잔액조회
*/
int main()
{
	int choice;  //선택 메뉴
	int amount;  //금액
	//전역 변수(값을 공유, 유지함)
	int balance = 0; //잔고(0으로 초기화 필수)

	while (1) {
		printf("======================================\n");
		printf("1.예금 | 2.출금 | 3.잔액조회 | 4.종료\n");
		printf("======================================\n");
		printf("선택> ");

		scanf("%d", &choice);

		switch (choice) {
		case 1:
			printf("예금액> ");
			scanf("%d", &amount);
			balance += amount;
			printf("%d원이 정상 입금되었습니다.\n", amount);
			break;
		case 2:
			printf("출금액> ");
			scanf("%d", &amount);
			if (amount > balance) {
				printf("잔액 부족입니다. 현재 잔액: %d원\n", balance);
			}
			else {
				balance -= amount;
				printf("%d원이 정상 출금되었습니다.\n", amount);
			}
			break;
		case 3:
			printf("잔고: %d원\n", balance);
			break;
		case 4:
			printf("프로그램을 종료합니다.\n");
			return;
		default:
			printf("지원되지 않는 옵션입니다.\n");
			break;
		}
	}

	return 0;
}