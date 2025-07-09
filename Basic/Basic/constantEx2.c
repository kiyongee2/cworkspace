#define _CRT_SECURE_NO_WARNINGS //scanf()-안전 모드로 처리
#include <stdio.h>
#define RATE_KPH_MPH 1.6093 //매크로 상수(변환 상수)
/*
   1mile = 1.609km
*/
int main()
{
	int kph;  //시간당 킬로미터
	double mph;  //시간당 마일

	printf("당신의 구속을 입력하세요[KPH]: ");
	scanf("%d", &kph);

	//마일 계산
	mph = kph / RATE_KPH_MPH;

	printf("당신의 구속은 %.2lf[MPH]입니다.\n", mph);

	return 0;
}