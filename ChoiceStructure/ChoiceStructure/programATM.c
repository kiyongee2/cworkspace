#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
    ���� �ڵ� ����ݱ� ���α׷�
	- ����, ���, �ܾ���ȸ
*/
int main()
{
	int choice;  //���� �޴�
	int amount;  //�ݾ�
	//���� ����(���� ����, ������)
	int balance = 0; //�ܰ�(0���� �ʱ�ȭ �ʼ�)

	while (1) {
		printf("======================================\n");
		printf("1.���� | 2.��� | 3.�ܾ���ȸ | 4.����\n");
		printf("======================================\n");
		printf("����> ");

		scanf("%d", &choice);

		switch (choice) {
		case 1:
			printf("���ݾ�> ");
			scanf("%d", &amount);
			balance += amount;
			printf("%d���� ���� �ԱݵǾ����ϴ�.\n", amount);
			break;
		case 2:
			printf("��ݾ�> ");
			scanf("%d", &amount);
			if (amount > balance) {
				printf("�ܾ� �����Դϴ�. ���� �ܾ�: %d��\n", balance);
			}
			else {
				balance -= amount;
				printf("%d���� ���� ��ݵǾ����ϴ�.\n", amount);
			}
			break;
		case 3:
			printf("�ܰ�: %d��\n", balance);
			break;
		case 4:
			printf("���α׷��� �����մϴ�.\n");
			return;
		default:
			printf("�������� �ʴ� �ɼ��Դϴ�.\n");
			break;
		}
	}

	return 0;
}