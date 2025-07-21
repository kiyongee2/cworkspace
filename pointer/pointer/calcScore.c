#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

/*
   성적 처리 프로그램
*/

int main()
{
	int studentNum;  //학생수
	int* score = NULL; //점수 배열(동적 할당)
	int choice, sum, max;  //메뉴선택, 합계, 최고점수
	float avg;  //평균

	while (1) {
		printf("--------------------------------------------------------\n");
		printf("1.학생수 | 2.점수 입력 | 3.점수 리스트 | 4. 분석 | 5.종료\n");
		printf("--------------------------------------------------------\n");
		printf("선택> ");
		scanf("%d", &choice);
	}

	return 0;
}