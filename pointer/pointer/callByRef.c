#include <stdio.h>

void callByVal(int); //변수 이름은 생략 가능
void callByRef(int*);
int main()
{
	int num = 10;

	puts("-- 값에 의한 호출 --");
	callByVal(num);
	printf("%d\n", num); //10

	puts("-- 주소에 의한 호출 --");
	callByRef(&num);
	printf("%d\n", num); //11

	return 0;
}

//값 호출 함수 정의
void callByVal(int n) {
	n++;
	printf("%d\n", n); //11
}

//참조 호출 함수 정의
void callByRef(int* p) {
	*p += 1; //*p = *p + 1;
	printf("%d\n", *p); //11
}