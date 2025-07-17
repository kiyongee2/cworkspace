#define _USE_MATH_DEFINES //M_PI 상수 사용
#include <stdio.h>
#include <math.h> //수학 관련 함수 사용

//#define PI 3.1415 //직접 만든 매크로 상수

int main()
{
	//절대값 계산 - abs(정수)
	printf("%d\n", abs(-8));
	printf("%d\n", abs(+8));

	//반올림 - round(실수)
	printf("%.1f\n", round(2.54)); //3.0
	printf("%.1f\n", round(2.44)); //2.0

	//내림(버림) - floor(실수)
	printf("%.1f\n", floor(3.3));  //3.0
	printf("%.f\n", floor(3.3));  //3

	//올림
	printf("%.1f\n", ceil(3.3)); //4.0

	//거듭제곱
	printf("%.f\n", pow(2, 4)); //16

	//제곱근
	printf("%.f\n", sqrt(16));  //4

	//원주율 상수
	printf("%f\n", M_PI); //3.141593

	int result = pow(3, ceil(M_PI));
	printf("%d\n", result); //3의 4제곱 - 81

	return 0;
}