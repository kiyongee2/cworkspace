#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
    for(�ʱⰪ; ���ǽ�; ������;){
		���๮
	}
*/
int main()
{
	/*1 ~ 10 ���
	  3�� ����� ���
	  3�� ����� �հ�, ��� ���
	  ��� = �հ� / ����
	*/
	int i;
	int count = 0;
	int sum = 0;
	float average;

	for (i = 1; i < 11; i++) {
		if (i % 3 == 0) {
			count++;
			sum += i;
			printf("%3d", i);
		}
	}
	//��� ���
	average = (float)sum / count;

	printf("\n����: %d\n", count);
	printf("\n�հ�: %d\n", sum);
	printf("\n���: %.1f\n", average);
	printf("\n\n\n");

	/*
	   ������ ����ϱ�
	   2 x 1 = 2
	   2 x 2 = 4
	   2 x 3 = 6
	   ...
	   2 x 9 = 18
	*/
	int dan;
	int j;

	printf("�� �Է�: ");
	scanf("%d", &dan);

	for (j = 1; j <= 9; j++) {
		printf("%d x %d = %d\n", dan, j, (dan * j));
	}

	return 0;
}