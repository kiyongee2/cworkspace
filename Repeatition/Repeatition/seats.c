#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
    자리배치도 프로그램
	행, 열
	column
	row

	고객 - 21
	열 - 4
	행 - 5 + 1
	나누어 떨어지면 - 배수(행) : 몫
	나누어 떨어지지 않으면 (몫 + 1)

*/

int main()
{
	int customer;
	int column; //열
	int row; //행
	int i, j; //반복 변수

	printf("입장객 수 입력: ");
	scanf("%d", &customer);

	printf("좌석열 수 입력: ");
	scanf("%d", &column);

	if (customer % column == 0) {
		row = customer / column; //몫
	}
	else {
		row = customer / column + 1;
	}
	//printf("%d줄이 필요합니다.\n", row);

	//2차원 - 행(row):바깥 for, 열(column):안쪽 for
	int num = 0; //0으로 초기화

	for (i = 0; i < row; i++) {
		for (j = 1; j <= column; j++) {
			num = i * column + j;
			if (num > customer)
				break;
			printf("좌석%d ", num); //5는 j의 종료값
		}
		printf("\n");
	}
	

	return 0;
}