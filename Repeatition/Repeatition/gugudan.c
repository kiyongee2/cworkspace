#include <stdio.h>

int main()
{
	//������ ��ü ���
	int i, j;  //i-��, j-���� ����
	/*for (i = 2; i <= 9; i++) {
		for (j = 1; j <= 9; j++) {
			printf("%d x %d = %d\n", i, j, (i * j));
		}
		printf("\n");
	}*/

	//�ܺ��� ���ϴ� ���� ���ų� ���� �������� ����ϱ�
	//���1
	/*for (i = 2; i <= 9; i++) {
		for (j = 1; j <= i; j++) {
			printf("%d x %d = %d\n", i, j, (i * j));
		}
		printf("\n");
	}*/

	//���2
	for (i = 2; i <= 9; i++) {
		for (j = 1; j <= i; j++) {
			if(i >= j)
				printf("%d x %d = %d\n", i, j, (i * j));
		}
		printf("\n");
	}

	return 0;
}