#include <stdio.h>
/*
   ���
   - �ѹ� �����ϸ� �� ���α׷��� ����ɶ����� ����� �� ���� ��
   - ���ʷ� �빮�ڷ� �ۼ�
   1. ��ũ�� ��� - main() ���� �ۼ�- #define ����̸� �����
      �����Ϸ��� �ƴ� ��ó���Ⱑ ó����
   2. const ��� - ���� �տ� const Ű���带 ����
*/
#define PI 3.1415   //��ũ�� ���

int main()
{
	const int MAX_NUM = 10; //���

	//maxNum = 10;  //���� ������ �� ����
	printf("%d\n", MAX_NUM);

	//������ - PI ���
	//const double PI = 3.1415;
	int radius = 5;
	double areaOfCircle; 

	//PI = 3.2; //���� �Ұ�

	//���� ���� = PI * ������ * ������
	areaOfCircle = PI * radius * radius;

	printf("���� ����: %.3lf\n", areaOfCircle);

	return 0;
}