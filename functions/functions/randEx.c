#include <stdio.h>
#include <stdlib.h>
/*
   rand() 함수는 난수를 생성하는 함수
   - srand()함수가 먼저 필요하고
   - %(나머지 연산)을 수행함
*/
int main()
{
	//시드(seed) - 난수 생성의 초기값
	//srand(9) - 한 번만 랜덤.
	srand(time(NULL)); //시간이 흐르면 계속 변화

	int rndVal = rand(); //예: 20001
	printf("%d\n", rndVal);

	//동전 구현
	//rand() % n -> 0 ~ n-1까지 계산됨
	int coin = rand() % 2 + 1;  //1, 2
	printf("%d\n", coin);
	
	//1 - 앞면, 2 - 뒷면
	if (coin == 1) {
		printf("앞면\n");
	}
	else {
		printf("뒷면\n");
	}

	//주사위 10번 던지기
	int dice; //주사위
	int i;

	for (i = 1; i <= 10; i++) { 
		dice = rand() % 6 + 1;
		printf("%d\n", dice);
	}

	return 0;
}