#include <stdio.h>
/*
    - 어떤 수가 짝수인지 홀수인지 판정하는 프로그램
	   # 2의 배수, 3의 배수
	   # 2로 나누어서 나머지가 0 -> num % 2 == 0

	- if 중첩
	- 10을 기준으로 10보다 큰 짝수/홀수 구분하고,
	  10보다 작은 짝수/홀수 구분
*/

int main()
{
	int num;

	printf("정수 입력: ");
	scanf_s("%d", &num);

	if (num >= 10) {
		if (num % 2 == 0) {
			printf("10보다 큰 짝수\n");
		}
		else { //num % 2 != 0
			printf("10보다 큰 홀수\n");
		}
	}
	else {
		if (num % 2 == 0) {
			printf("10보다 작은 짝수\n");
		}
		else { //num % 2 != 0
			printf("10보다 작은 홀수\n");
		}
	}

	return 0;
}