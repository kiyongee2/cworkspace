#define _CRT_SECURE_NO_WARNINGS //scanf()-���� ���� ó��
#include <stdio.h> //ǥ�� �����
/*
   scanf("���Ĺ���<�Է�����>", ������ ���� ����) - �Է�ó�� �Լ�
*/
int main()
{
	//����
	int age, grade;
	float height;

	printf("���̸� �Է��ϼ���: ");
	scanf("%d", &age); //'&(�ּ� ������)'

	printf("�г��� �Է��ϼ���: ");
	scanf("%d", &grade);

	printf("Ű�� �Է��ϼ���: ");
	scanf("%f", &height);

	printf("����: %d\n", age);
	printf("�г�: %d\n", grade);
	printf("Ű: %.1f\n", height);

	return 0;
}