#include <stdio.h>
#include <math.h> //���� ���� �Լ� ���

int main()
{
	//���밪 ��� - abs(����)
	printf("%d\n", abs(-8));
	printf("%d\n", abs(+8));

	//�ݿø� - round(�Ǽ�)
	printf("%.1f\n", round(2.54)); //3.0
	printf("%.1f\n", round(2.44)); //2.0

	//����(����) - floor(�Ǽ�)
	printf("%.1f\n", floor(3.3));  //3.0
	printf("%.f\n", floor(3.3));  //3

	return 0;
}