#include <stdio.h>
#include <math.h> //abs()
/*
   중첩 구조체
   - 구조체가 서로 관계를 갖는 것
   - 한 구조체의 멤버 변수가 다른 구조체를 참조(사용)한 경우
*/

struct Point {
	int x; //멤버 변수
	int y;
};

struct Rectangle {
	//Point의 구조체 변수 사용
	struct Point p1;
	struct Point p2;
};

int main()
{
	//사각형 구조체 변수 생성
	/*struct Rectangle rect;

	rect.p1.x = 1;
	rect.p1.y = 5;

	rect.p2.x = 4;
	rect.p2.y = 2;*/

	struct Rectangle rect = {
		.p1 = {1, 5},
		.p2 = {4, 2}
	};
	int width, height; //너비, 높이

	width = abs(rect.p2.x - rect.p1.x);
	height = abs(rect.p2.y - rect.p1.y);

	//출력
	printf("점1(%d, %d), 점2(%d, %d)\n", 
			rect.p1.x, rect.p1.y, rect.p2.x, rect.p2.y);

	printf("너비: %d, 높이: %d\n", width, height); //3, 3

	return 0;
}