#include <stdio.h>
/*
    배열(array) - 동일한 자료형의 여러 개의 값을 저장하는 자료 구조 
	자료형 배열명[크기]

*/
int main()
{
	//정수형 배열 선언
	int arr[4];
	int i;  //반복 변수

	//요소 추가
	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;
	arr[3] = 40;

	//배열 선언과 동시에 초기화
	//int arr2[4] = { 10, 20, 30, 40 };

	//특정 요소 검색
	printf("%d\n", arr[1]);  //20

	//요소 수정
	arr[2] = 50;

	//전체 출력
	for (i = 0; i < 4; i++) {
		printf("%3d", arr[i]);
	}
	printf("\n");

	// 10 20 50 40

	//요소 삭제
	arr[1] = 0;

	for (i = 1; i < 3; i++) {
		arr[i] = arr[i + 1];  // 10 50 40
	}

	//전체 출력
	for (i = 0; i < 3; i++) {
		printf("%3d", arr[i]);
	}
	
	return 0;
}