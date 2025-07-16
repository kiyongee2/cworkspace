#include <stdio.h>

int square(int x) { 
	//정사각형 = 가로 x 세로
	return x * x;
}

float triangle(int x, int y) {
	//삼각형 = 밑변 x 높이 / 2
	/*지역 변수(local variable)
	  함수나 제어문 블럭안에서 생성되고,
	  호출된 후 메모리에서 소멸(해제)됨*/
	float result = 0; 
	//result = (x * y) / 2.0; //실수형으로 자동 형변환
	result = (float)(x * y) / 2; //실수형으로 강제 형변환
	return result;
}

//전역 변수
int num = 100;

int main()
{
	int val1;    //main()의 지역변수
	float val2;

	val1 = square(4);
	val2 = triangle(3, 5);

	printf("정사각형의 넓이: %dcm\n", val1);
	printf("삼각형의 넓이: %.1fcm\n", val2);

	//printf("%d\n", result); //없어진 변수이므로 호출할 수 없음
	printf("%d\n", num); //100

	return 0;
}










