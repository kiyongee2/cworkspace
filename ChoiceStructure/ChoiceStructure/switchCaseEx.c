#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
    switch(����){
	  case 1:
		���๮
		break;
	  ....
	  default:
	}
*/
int main()
{
	//���������� Ÿ��: 1 ~ 3�� �ǹ�
	int floor;

	printf("���� ���� ���� ��������: ");
	scanf("%d", &floor);

	switch (floor) {
	case 1:
		printf("1���� �������ϴ�.\n");
		break;
	case 2:
		printf("2���� �������ϴ�.\n");
		break;
	case 3:
		printf("3���� �������ϴ�.\n");
		break;
	default:
		printf("�ǹ��� ���� ���Դϴ�.\n");
		break;
	}

	//if������ ȣȯ
	/*if (floor == 1) {
		printf("1���� �������ϴ�.\n");
	}
	else if (floor == 2) {
		printf("2���� �������ϴ�.\n");
	}
	else if (floor == 3) {
		printf("3���� �������ϴ�.\n");
	}
	else {
		printf("�ǹ��� ���� ���Դϴ�.\n");
	}*/

	return 0;
}











