#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
    �ڸ���ġ�� ���α׷�
	��, ��
	column
	row

	�� - 21
	�� - 4
	�� - 5 + 1
	������ �������� - ���(��) : ��
	������ �������� ������ (�� + 1)

*/

int main()
{
	int customer;
	int column; //��
	int row; //��
	int i, j; //�ݺ� ����

	printf("���尴 �� �Է�: ");
	scanf("%d", &customer);

	printf("�¼��� �� �Է�: ");
	scanf("%d", &column);

	if (customer % column == 0) {
		row = customer / column; //��
	}
	else {
		row = customer / column + 1;
	}
	//printf("%d���� �ʿ��մϴ�.\n", row);

	//2���� - ��(row):�ٱ� for, ��(column):���� for
	int num = 0; //0���� �ʱ�ȭ

	for (i = 0; i < row; i++) {
		for (j = 1; j <= column; j++) {
			num = i * column + j;
			if (num > customer)
				break;
			printf("�¼�%d ", num); //5�� j�� ���ᰪ
		}
		printf("\n");
	}
	

	return 0;
}