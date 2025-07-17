#include <stdio.h>
#include <stdlib.h>
/*
   rand() �Լ��� ������ �����ϴ� �Լ�
   - srand()�Լ��� ���� �ʿ��ϰ�
   - %(������ ����)�� ������
*/
int main()
{
	//�õ�(seed) - ���� ������ �ʱⰪ
	//srand(9) - �� ���� ����.
	srand(time(NULL)); //�ð��� �帣�� ��� ��ȭ

	int rndVal = rand(); //��: 20001
	printf("%d\n", rndVal);

	//���� ����
	//rand() % n -> 0 ~ n-1���� ����
	int coin = rand() % 2 + 1;  //1, 2
	printf("%d\n", coin);
	
	//1 - �ո�, 2 - �޸�
	if (coin == 1) {
		printf("�ո�\n");
	}
	else {
		printf("�޸�\n");
	}

	//�ֻ��� 10�� ������
	int dice; //�ֻ���
	int i;

	for (i = 1; i <= 10; i++) { 
		dice = rand() % 6 + 1;
		printf("%d\n", dice);
	}

	return 0;
}