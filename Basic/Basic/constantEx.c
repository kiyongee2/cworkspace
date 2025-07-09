#include <stdio.h>
/*
   상수
   - 한번 설정하면 그 프로그램이 종료될때까지 변경될 수 없는 값
   - 관례로 대문자로 작성
   1. 매크로 상수 - main() 위에 작성- #define 상수이름 상수값
      컴파일러가 아닌 전처리기가 처리함
   2. const 상수 - 변수 앞에 const 키워드를 붙임
*/
#define PI 3.1415   //매크로 상수

int main()
{
	const int MAX_NUM = 10; //상수

	//maxNum = 10;  //값을 변경할 수 없음
	printf("%d\n", MAX_NUM);

	//원주율 - PI 사용
	//const double PI = 3.1415;
	int radius = 5;
	double areaOfCircle; 

	//PI = 3.2; //변경 불가

	//원의 넓이 = PI * 반지름 * 반지름
	areaOfCircle = PI * radius * radius;

	printf("원의 넓이: %.3lf\n", areaOfCircle);

	return 0;
}