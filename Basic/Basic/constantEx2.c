#define _CRT_SECURE_NO_WARNINGS //scanf()-���� ���� ó��
#include <stdio.h>
#define RATE_KPH_MPH 1.6093 //��ũ�� ���(��ȯ ���)
/*
   1mile = 1.609km
*/
int main()
{
	int kph;  //�ð��� ų�ι���
	double mph;  //�ð��� ����

	printf("����� ������ �Է��ϼ���[KPH]: ");
	scanf("%d", &kph);

	//���� ���
	mph = kph / RATE_KPH_MPH;

	printf("����� ������ %.2lf[MPH]�Դϴ�.\n", mph);

	return 0;
}