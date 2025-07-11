#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
    for(초기값; 조건식; 증감값;){
		실행문
	}
*/
int main()
{
	/*1 ~ 10 출력
	  3의 배수만 출력
	  3의 배수의 합계, 평균 계산
	  평균 = 합계 / 개수
	*/
	int i;
	int count = 0;
	int sum = 0;
	float average;

	for (i = 1; i < 11; i++) {
		if (i % 3 == 0) {
			count++;
			sum += i;
			printf("%3d", i);
		}
	}
	//평균 계산
	average = (float)sum / count;

	printf("\n개수: %d\n", count);
	printf("\n합계: %d\n", sum);
	printf("\n평균: %.1f\n", average);
	printf("\n\n\n");

	/*
	   구구단 출력하기
	   2 x 1 = 2
	   2 x 2 = 4
	   2 x 3 = 6
	   ...
	   2 x 9 = 18
	*/
	int dan;
	int j;

	printf("단 입력: ");
	scanf("%d", &dan);

	for (j = 1; j <= 9; j++) {
		printf("%d x %d = %d\n", dan, j, (dan * j));
	}

	return 0;
}