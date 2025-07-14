#include <stdio.h>
/*
 배열 길이가 5인 정수 배열을 선언하고, 1~10중 홀수만을 배열에 저장한후
 그 합과 평균을 계산하세요
*/


int main()
{
	int arr[5]; //정수 배열 선언
	int i;
	int sum = 0;
	float avg;

	for (i = 0; i < 5; i++) {
		arr[i] = (i * 2) + 1; //1,3,5,7,9
		sum += arr[i];
	}
	avg = (float)sum / 5;

	printf("합계 : %d\n", sum);
	printf("평균 : %.1f\n", avg);

	return 0;
}