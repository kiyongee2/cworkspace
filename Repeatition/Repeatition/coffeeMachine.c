#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
    Ŀ�� �ڵ��Ǹű� ���α׷�
	- ���� : 500
	- Ŀ���� �Ѱ��� : 5
*/
int main()
{
	int coffee = 5;
	int money;

	while (1) {
		printf("������ �־��ּ���: ");
		scanf("%d", &money);  //���� �Է� - �Է� ��� ��

		if (money == 500) {
			printf("Ŀ�ǰ� ���ɴϴ�.\n");
			coffee -= 1; //coffee--;  //Ŀ�� 1 ����
		}
		else if (money > 500) {
			printf("Ŀ�ǰ� ���ɴϴ�. �Ž����� %d���� ���� �޽��ϴ�.\n", 
					(money-500));
			coffee--;  //Ŀ�� 1 ����
		}
		else {
			printf("Ŀ�ǰ� ������ �ʰ�, ���� ���� �޽��ϴ�.\n");
		}

		//�ܵ� if��
		if (coffee == 0) {
			printf("Ŀ�ǰ� ��� �����Ǿ� �ǸŸ� �ߴ��մϴ�.\n");
			break;
		}
	}

	return 0;
}