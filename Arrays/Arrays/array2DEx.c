#include <stdio.h>
//이차원 배열
int main()
{
	//정수형 배열 생성
	int a[3][2] = { 
		75, 80, 
		85, 95, 
		90, 100 
	};

	//특정 요소 검색
	printf("%d\n", a[0][0]);  //75
	printf("%d\n", a[1][1]);  //95
	printf("--------------------\n");

	//전체 출력1 - 단일 for문
	for (int x = 0; x < 3; x++) { //x - 행(row), 열 - 상수(고정)
		printf("%d %d\n", a[x][0], a[x][1]);
	}
	printf("--------------------\n");

	//전체 출력2 - 중첩 for문
	for (int x = 0; x < 3; x++) { //x - 행(row), y - 열(col)
		for (int y = 0; y < 2; y++) {
			printf("%d ", a[x][y]);
		}
		printf("\n"); //행 바꿈
	}
	printf("--------------------\n");

	//예제 - 1부터 순서대로 입력하기
	int arr[3][3];
	int k = 0;

	//요소 저장
	for (int x = 0; x < 3; x++) { 
		for (int y = 0; y < 3; y++) {
			k++;
			arr[x][y] = k;
		}
	}

	//전체 출력
	for (int x = 0; x < 3; x++) {
		for (int y = 0; y < 3; y++) {
			printf("%d ", arr[x][y]);
		}
		printf("\n");
	}

	return 0;
}