#include <stdio.h>
#include <math.h> //수학 관련 함수 사용

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

	return 0;
}