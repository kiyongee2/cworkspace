//calculator.c

//�հ踦 ����ϴ� �Լ� ����
int calcSum(int n) { 
	int i;
	int sum = 0; //�ʱⰪ ����

	for (i = 1; i <= n; i++) {
		sum += i;
	}
	return sum;
}

//���� ����ϴ� �Լ� ����
// 1x2x3x4 = 4!
int calcGob(int n) {
	int i;
	int gob = 1; //�ʱⰪ ����

	for (i = 1; i <= n; i++) {
		gob *= i; //gob = gob * i
	}
	return gob;
}