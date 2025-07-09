#include <stdio.h>
/*
    if(조건식){실행문} - 조건식이 참(1)일때 실행
*/
int main()
{
	//조건1 - 나이가 15세 이상이면, "관람가"를 출력
	//조건2 - 나이가 15세 이상이면, "관람가" 아니면 "관람불가" 출력
	int age = 14;

	/*if (age >= 15) {
		printf("관람가\n");
	}*/

	//if ~ else문
	if (age >= 15) {
		printf("관람가\n");
	}
	else { //age < 15
		printf("관람불가\n");
	}

	printf("나이는 %d세입니다.\n", age);

	return 0;
}