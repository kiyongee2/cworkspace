#include <stdio.h>

/*
   윤년(2월 29일인 해)
   1. 4년에 한번 윤년이다.(4의 배수) 그리고 매 100년은 해는 윤년이 아니다.
   2. 또는 매 400년은 윤년이다.
*/

int main()
{
	int year;

	printf("연도를 입력하세요: ");
	scanf_s("%d", &year);

	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) { //0 || 1 - 1
		printf("%d년은 윤년입니다.\n", year);
	}
	else {
		printf("%d년은 평년입니다.\n", year);
	}

	return 0;
}