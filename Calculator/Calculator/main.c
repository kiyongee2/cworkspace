#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "calculator.h" //������� ����(�ֵ���ǥ ���)

int main()
{
	int num1, num2;

	printf("==== ������ ���� =====\n");
	printf("1���� ����� ���ұ��? ");
	scanf("%d", &num1);
	printf("1���� %d���� ���� ���� %d�Դϴ�.\n", num1, calcSum(num1));

	printf("-------------------------------------\n");
	printf("1���� ����� ���ұ��? ");
	scanf("%d", &num2);

	printf("1���� %d���� ���� ���� %d�Դϴ�.\n", num2, calcGob(num2));

	system("pause");

	return 0;
}