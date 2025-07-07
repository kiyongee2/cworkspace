#include <stdio.h>

int main()
{
	//변수 선언 - 자료형 변수이름(의미)
	int n1 = 10; //정수형
	int n2 = 20;
	//서식문자 - float : %f, double : %lf
	float rateOfBirth = 0.75f; //float 자료형의 값은 'f' or 'F'를 붙음
	double rateOfBirth2 = 0.75; //실수형은 double형이 표준이다.

	printf("값=%d, 번지=%x\n", n1, &n1);
	printf("두 수의 합: %d\n", n1 + n2); //30
	printf("두 수의 차: %d\n", n1 - n2); //-10
	printf("대한민국의 2024년 출산율은 %.2f명입니다.\n", rateOfBirth);
	printf("대한민국의 2024년 출산율은 %.2lf명입니다.\n", rateOfBirth2);

	/*
	    변수 이름 사용시 오류
		1. 숫자로 시작 불허
		2. 변수에 공백 불허
		3. 예약어 사용 불가(if, while, for)
	*/

	//문자형 변수 선언
	char grade = 'B';
	//문자열 배열 선언
	char nameOfFruit[] = "사과";

	printf("그 호텔의 서비스는 %c등급이다.\n", grade);
	printf("그 과일의 이름은 %s이다.\n", nameOfFruit);

	printf("===== 자료형의 크기 =====\n");
	printf("int: %dByte\n", sizeof(n1)); //4
	printf("double: %dByte\n", sizeof(rateOfBirth2)); //8
	printf("char: %dByte\n", sizeof(grade)); //1
	printf("char[]: %dByte\n", sizeof(nameOfFruit)); //5

	return 0;
}