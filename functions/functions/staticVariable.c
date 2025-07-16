#include <stdio.h>

/*
   정적 변수(static variable)
   - 변수앞에 static 키워드를 붙임
   - 함수 블럭안에서 전역변수화 함
   - 함수나 제어문 블럭안에서 생성되고,
   - 프로그램이 종료되면 메모리에서 소멸함
*/

//int x = 0; //전역 변수

void call() {
	//int x = 0;      //지역 변수
	static int x = 0; //정적 변수(전역 변수화)

	x++;  //x = x + 1
	printf("현재 %d번째 호출되었습니다.\n", x);
}

int main()
{
	call();
	call();
	call();

	return 0;
}