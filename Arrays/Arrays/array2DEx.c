#include <stdio.h>
//������ �迭
int main()
{
	//������ �迭 ����
	int a[3][2] = { 
		75, 80, 
		85, 95, 
		90, 100 
	};

	//Ư�� ��� �˻�
	printf("%d\n", a[0][0]);  //75
	printf("%d\n", a[1][1]);  //95
	printf("--------------------\n");

	//��ü ���1 - ���� for��
	for (int x = 0; x < 3; x++) { //x - ��(row), �� - ���(����)
		printf("%d %d\n", a[x][0], a[x][1]);
	}
	printf("--------------------\n");

	//��ü ���2 - ��ø for��
	for (int x = 0; x < 3; x++) { //x - ��(row), y - ��(col)
		for (int y = 0; y < 2; y++) {
			printf("%d ", a[x][y]);
		}
		printf("\n"); //�� �ٲ�
	}
	printf("--------------------\n");

	//���� - 1���� ������� �Է��ϱ�
	int arr[3][3];
	int k = 0;

	//��� ����
	for (int x = 0; x < 3; x++) { 
		for (int y = 0; y < 3; y++) {
			k++;
			arr[x][y] = k;
		}
	}

	//��ü ���
	for (int x = 0; x < 3; x++) {
		for (int y = 0; y < 3; y++) {
			printf("%d ", arr[x][y]);
		}
		printf("\n");
	}

	return 0;
}