#define _USE_MATH_DEFINES //M_PI ��� ���
#include <stdio.h>
#include <math.h> //���� ���� �Լ� ���

//#define PI 3.1415 //���� ���� ��ũ�� ���

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

	//�ø�
	printf("%.1f\n", ceil(3.3)); //4.0

	//�ŵ�����
	printf("%.f\n", pow(2, 4)); //16

	//������
	printf("%.f\n", sqrt(16));  //4

	//������ ���
	printf("%f\n", M_PI); //3.141593

	int result = pow(3, ceil(M_PI));
	printf("%d\n", result); //3�� 4���� - 81

	return 0;
}