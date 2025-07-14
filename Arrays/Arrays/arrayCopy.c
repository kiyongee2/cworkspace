#include <stdio.h>

int main()
{
	//문자열 저장할 배열 생성
	char a1[] = "NET"; //문자열의 끝에 '\0' 널(NUL)문자 존재
	char a2[4]; //빈 배열의 크기 - 4byte
	int i;

	//printf("%s", a1);
	printf("%c\n", a1[0]); //N
	printf("%c\n", a1[3]); //'\0'
	printf("%c\n", a1[1]); //E
	printf("%c\n", a1[2]); //T

	//배열 a1의 요소를 배열 a2에 저장
	for (i = 0; i < 4; i++) {
		a2[i] = a1[i];
	}

	//출력
	for (i = 0; i < 4; i++) {
		printf("%c", a2[i]);
	}
	printf("\n");

	//a1을 a3에 거꾸로 복사
	char a3[4];
	for (i = 0; i < 4; i++) {
		a3[i] = a1[2-i];
	}
	a3[3] = '\0'; //널문자를 끝 인덱스에 저장

	printf("%s", a3);

	return 0;
}