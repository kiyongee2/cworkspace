#include <stdio.h>
/*
     ���� ����ǥ
	 - 90 ~ 100 : A
	 - 80 ~ 89 : B
	 - 70 ~ 79 : C
	 - 70�̸� : D
*/

int main()
{
	int score = 77;
	char grade;

	if (score >= 90 && score <= 100) {
		grade = 'A';
	}
	else if (score >= 80 && score < 90) {
		grade = 'B';
	}
	else if (score >= 70 && score < 80) {
		grade = 'C';
	}
	else {
		grade = 'D';
	}

	printf("������ %d���̰�, ������ %c�Դϴ�.\n", score, grade);

	return 0;
}