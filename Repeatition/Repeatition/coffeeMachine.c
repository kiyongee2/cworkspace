#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
    커피 자동판매기 프로그램
	- 가격 : 500
	- 커피의 총개수 : 5
*/
int main()
{
	int coffee = 5;
	int money;

	while (1) {
		printf("동전을 넣어주세요: ");
		scanf("%d", &money);  //동전 입력 - 입력 대기 중

		if (money == 500) {
			printf("커피가 나옵니다.\n");
			coffee -= 1; //coffee--;  //커피 1 감소
		}
		else if (money > 500) {
			printf("커피가 나옵니다. 거스름돈 %d원을 돌려 받습니다.\n", 
					(money-500));
			coffee--;  //커피 1 감소
		}
		else {
			printf("커피가 나오지 않고, 돈을 돌려 받습니다.\n");
		}

		//단독 if문
		if (coffee == 0) {
			printf("커피가 모두 소진되어 판매를 중단합니다.\n");
			break;
		}
	}

	return 0;
}