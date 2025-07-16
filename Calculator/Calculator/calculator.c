//calculator.c

//합계를 계산하는 함수 정의
int calcSum(int n) { 
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