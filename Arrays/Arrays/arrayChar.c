#include <stdio.h>

int main()
{
	//문자를 저장할 배열 생성
	//배열의 인덱스 크기는 요소의 개수보다 크거나 같아야 함
	char msg[6] = { 'h', 'e', 'l', 'l', 'o' };
	int i;  //반복 변수

	//특정 요소
	printf("%c\n", msg[1]); //e

	//전체 출력
	for (i = 0; i < 5; i++) {
		printf("%c ", msg[i]);
	}
	printf("\n");
	//hello -> yellow로 변경

	// h -> y로 변경
	msg[0] = 'y';

	//요소 추가
	msg[5] = 'w';

	//전체 출력
	for (i = 0; i < 6; i++) {
		printf("%c ", msg[i]);
	}

	return 0;
}





