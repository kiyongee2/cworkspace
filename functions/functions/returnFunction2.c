#include <stdio.h>

int calcSum(int n);
int calcGob(int n);
int main()
{
	int value1, value2;
	
	value1 = calcSum(100); //ȣ��(�Է±��)
	value2 = calcGob(4);

	printf("�հ�: %d\n", value1);
	printf("��: %d\n", value2);

	return 0;
}

//�հ踦 ����ϴ� �Լ� ����
int calcSum(int n) { //int n = 10
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











