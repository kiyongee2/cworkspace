#define _CRT_SECURE_NO_WARNINGS //strcpy()
#include <stdio.h>
#include <string.h> //strcpy()

//배열을 이용해서 수정 - int a[]
//포인터를 이용해서 수정 - int* ptr
void changeArray(int* ptr) { //ptr = arr
	//요소 수정
	ptr[1] = 50;
}

//문자열 반환 함수
char* message() {
	return "행운을 빌어요!";
}

int main()
{
	//배열의 요소 수정
	int arr[] = { 10, 20, 30 };
	changeArray(arr); //함수 호출

	for (int i = 0; i < 3; i++) {
		printf("%d\n", arr[i]);
	}

	//문자열 반환하기
	char msg[50];

	//strcpy(복사할 공간, 문자열)
	strcpy(msg, message());
	printf("%s\n", msg);

	return 0;
}