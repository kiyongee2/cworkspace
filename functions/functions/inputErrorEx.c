#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//���� �Է½� ���ڰ� �Էµ� ��� ���� ó��
int getValidInt() {
	int num;
	while (1) {
		printf("������ �Է��ϼ���: ");
		int value = scanf("%d", &num);
		if (value == 1) {
			return num; 
		}
		else {
			printf("��ȿ�� ������ �Է��ϼ���.\n");
			while (getchar() != '\n');
		}
	}
}

int main()
{
	int number = getValidInt();

	printf("�Է��� ����: %d\n", number);

	return 0;
}