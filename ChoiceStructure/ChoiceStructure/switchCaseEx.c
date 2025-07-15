#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
    switch(변수){
	  case 1:
		실행문
		break;
	  ....
	  default:
	}
*/
int main()
{
	//엘리베이터 타기: 1 ~ 3층 건물
	int floor;

	printf("가고 싶은 층을 누르세요: ");
	scanf("%d", &floor);

	switch (floor) {
	case 1:
		printf("1층을 눌렀습니다.\n");
		break;
	case 2:
		printf("2층을 눌렀습니다.\n");
		break;
	case 3:
		printf("3층을 눌렀습니다.\n");
		break;
	default:
		printf("건물에 없는 층입니다.\n");
		break;
	}

	//if문으로 호환
	/*if (floor == 1) {
		printf("1층을 눌렀습니다.\n");
	}
	else if (floor == 2) {
		printf("2층을 눌렀습니다.\n");
	}
	else if (floor == 3) {
		printf("3층을 눌렀습니다.\n");
	}
	else {
		printf("건물에 없는 층입니다.\n");
	}*/

	return 0;
}











