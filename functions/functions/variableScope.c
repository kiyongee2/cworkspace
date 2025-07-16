#include <stdio.h>
/*
   전역 변수(global variable) - main()위에 위치
   main(), add10() 모두 영향을 미친다. 변수 x를 공유함
   main()과 함수() 위쪽에서 생성
   프로그램이 종료된 후에 메모리에서 소멸됨
*/
int x = 1;

int add10();
int main()
{
	int value;

	printf("%d\n", x); //1

	value = add10();

	printf("%d\n", value); //11
	printf("%d\n", x); //11

	return 0;
}

int add10() {
	//int x = 1; //지역 변수
	x = x + 10;
	return x;
}