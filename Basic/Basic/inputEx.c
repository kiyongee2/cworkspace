#define _CRT_SECURE_NO_WARNINGS //scanf()-안전 모드로 처리
#include <stdio.h> //표준 입출력
/*
   scanf("서식문자<입력형식>", 데이터 저장 변수) - 입력처리 함수
*/
int main()
{
	//나이
	int age, grade;
	float height;

	printf("나이를 입력하세요: ");
	scanf("%d", &age); //'&(주소 연산자)'

	printf("학년을 입력하세요: ");
	scanf("%d", &grade);

	printf("키를 입력하세요: ");
	scanf("%f", &height);

	printf("나이: %d\n", age);
	printf("학년: %d\n", grade);
	printf("키: %.1f\n", height);

	return 0;
}