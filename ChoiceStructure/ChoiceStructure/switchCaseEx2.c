#include <stdio.h>
/*
    switch ~ case��
	case ���ÿ� ����ϱ�
	- 31�� : 1, 3, 5, 7, 8, 10, 12
	- 30�� : 4, 6, 9, 11
	- 28�� : 2
*/
int main()
{
	int month = 13;
	int day;

	switch (month) {
	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		day = 31;
		break;
	case 4: case 6: case 9: case 11:
		day = 30;
		break;
	case 2:
		day = 28;
		break;
	default:
		printf("���߿� ���� ���Դϴ�.\n");
		return; //��� ����
	}
	printf("%d���� %d�ϱ��� �ֽ��ϴ�.\n", month, day);

	return 0;
}