#include <stdio.h>
/*
    switch ~ case문
	case 동시에 사용하기
	- 31일 : 1, 3, 5, 7, 8, 10, 12
	- 30일 : 4, 6, 9, 11
	- 28일 : 2
*/
int main()
{
	int month = 13;
	int day;

	switch (month) {
	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		day = 31;
		break;
	case 4: case 6: case 9: case 11:
		day = 30;
		break;
	case 2:
		day = 28;
		break;
	default:
		printf("연중에 없는 달입니다.\n");
		return; //즉시 종료
	}
	printf("%d월은 %d일까지 있습니다.\n", month, day);

	return 0;
}