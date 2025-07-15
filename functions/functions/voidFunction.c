#include <stdio.h>
/*
    함수(function)
	- 특정한 기능을 수행하는 프로그램이다.
	- 함수를 만들면(정의) 호출하여 사용한다.

*/
void sayHello(); //함수 선언부
void sayHello2(char name[]);
int main()
{
	sayHello(); //함수 이름 호출

	sayHello2("정후"); //이름을 부르는 함수 호출
	sayHello2("Elsa");

	return 0;
}

//void - 반환할 자료가 없음
void sayHello() {
	printf("안녕하세요~\n");
}

//매개 변수(전달 인자) - char name[]
void sayHello2(char name[]) { //char name[] = "정후"
	printf("%s님~ 안녕하세요~!\n", name);
}