#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

/*
   성적 처리 프로그램
*/

int main()
{
	bool run = true; //토글(상태) 변수, 실행/종료
	int studentNum;  //학생수
	int* score = NULL; //점수 배열(동적 할당)
	int choice, sum, max;  //메뉴선택, 합계, 최고점수
	float avg;  //평균

	while (run) {
		printf("--------------------------------------------------------\n");
		printf("1.학생수 | 2.점수 입력 | 3.점수 리스트 | 4. 분석 | 5.종료\n");
		printf("--------------------------------------------------------\n");
		printf("선택> ");

		scanf("%d", &choice); //사용자 선택

		switch (choice) {
		case 1:
			//학생수
			printf("학생수 입력: ");
			scanf("%d", &studentNum);
			//score의 배열의 크기는 학생수로 정함
			score = (int*)malloc(sizeof(int) * studentNum);
			break;
		case 2:
			//점수 입력
			for (int i = 0; i < studentNum; i++) {
				printf("score[%d]=", i);   //score[0]=90(입력)
				scanf("%d", &score[i]);
			}
			break;
		case 3:
			//점수 리스트
			for (int i = 0; i < studentNum; i++) {
				printf("score[%d]=%d\n", i, score[i]);   //score[0]=90
			}
			break;
		case 4:
			//분석(평균점수, 최고점수)
			sum = 0; //합계 초기화
			max = score[0]; //최대값 설정
			for (int i = 0; i < studentNum; i++) {
				sum += score[i]; //합계 계산
				if (max < score[i])
					max = score[i];
			}
			//평균 계산
			avg = (float)sum / studentNum;
			printf("평균 점수: %.2f점\n", avg);
			printf("최고 점수: %d점\n", max);
			break;
		case 5:
			printf("프로그램 종료!");
			run = false;
			break;
		default:
			printf("잘못된 선택입니다. 다시 선택하세요\n");
			break;
		}
	}//while() 끝

	free(score); //메모리 반납

	return 0;
}