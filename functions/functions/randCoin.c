#include <stdio.h>
#include <stdlib.h> //srand(), rand()
#include <time.h>

/*
    동전 던지기 게임
	- 앞면: 1, 뒷면: 2

*/
int main()
{
	int coin;  //컴퓨터의 난수
	int you;   //게임 유저
	//char aspect[][10] = { "", "앞면", "뒷면" };
	char* aspect[] = { "", "앞면", "뒷면" }; //포인터 사용 - 일차원 배열

	//printf("%s\n", aspect[1]); //앞면

	srand(time(NULL)); //시드 배정

	printf("앞면은 1, 뒷면은 2, 종료는 다른 값을 입력하세요\n");
	
	while (1) {
		coin = rand() % 2 + 1; //1, 2 - 난수 생성

		printf("동전을 던졌습니다. 앞면? 뒷면? ");
		scanf_s("%d", &you);

		if (you < 1 || you > 2) { //종료 조건
			printf("게임을 종료합니다.\n");
			break;
		}
		else {
			//조건 연산자
			printf("사용자: %s, 동전: %s\n", aspect[you], aspect[coin]);
			printf("%s\n", (you == coin) ? "맞았음" : "꽝!");
		}
	}

	return 0;
}