#include <stdio.h>
/*
    함수의 종류
	 - void형 함수
	 - return이 있는 함수
*/
//제곱수를 계산하는 함수 정의

int square(int x) { //int x = 3
	return x * x;
}

//절대값을 계산하는 함수
//음수는 양수로, 양수는 양수로 반환
int myAbs(int x) {
	if (x < 0)
		return -x;
	else
		return x;
}

char* message() {
	return "행운을 빌어요~";
}

int main()
{
	int value1, value2;

	value1 = square(3); //호출
	value2 = myAbs(-4);

	printf("제곱수: %d\n", value1);
	printf("절대값: %d\n", value2);
	printf("메시지: %s\n", message());
	

	return 0;
}