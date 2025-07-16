#include <stdio.h>

int calcSum(int n);
int calcGob(int n);
int main()
{
	int value1, value2;
	
	value1 = calcSum(100); //호출(입력기능)
	value2 = calcGob(4);

	printf("합계: %d\n", value1);
	printf("곱: %d\n", value2);

	return 0;
}

//합계를 계산하는 함수 정의
int calcSum(int n) { //int n = 10
	int i;
	int sum = 0; //초기값 설정

	for (i = 1; i <= n; i++) {
		sum += i;
	}
	return sum;
}

//곱을 계산하는 함수 정의
// 1x2x3x4 = 4!
int calcGob(int n) {
	int i;
	int gob = 1; //초기값 설정

	for (i = 1; i <= n; i++) {
		gob *= i; //gob = gob * i
	}
	return gob;
}











