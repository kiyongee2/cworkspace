#include <stdio.h>

int main()
{
	//���� ���� - �ڷ��� �����̸�(�ǹ�)
	int n1 = 10; //������
	int n2 = 20;
	//���Ĺ��� - float : %f, double : %lf
	float rateOfBirth = 0.75f; //float �ڷ����� ���� 'f' or 'F'�� ����
	double rateOfBirth2 = 0.75; //�Ǽ����� double���� ǥ���̴�.

	printf("��=%d, ����=%x\n", n1, &n1);
	printf("�� ���� ��: %d\n", n1 + n2); //30
	printf("�� ���� ��: %d\n", n1 - n2); //-10
	printf("���ѹα��� 2024�� ������� %.2f���Դϴ�.\n", rateOfBirth);
	printf("���ѹα��� 2024�� ������� %.2lf���Դϴ�.\n", rateOfBirth2);

	/*
	    ���� �̸� ���� ����
		1. ���ڷ� ���� ����
		2. ������ ���� ����
		3. ����� ��� �Ұ�(if, while, for)
	*/

	//������ ���� ����
	char grade = 'B';
	//���ڿ� �迭 ����
	char nameOfFruit[] = "���";

	printf("�� ȣ���� ���񽺴� %c����̴�.\n", grade);
	printf("�� ������ �̸��� %s�̴�.\n", nameOfFruit);

	printf("===== �ڷ����� ũ�� =====\n");
	printf("int: %dByte\n", sizeof(n1)); //4
	printf("double: %dByte\n", sizeof(rateOfBirth2)); //8
	printf("char: %dByte\n", sizeof(grade)); //1
	printf("char[]: %dByte\n", sizeof(nameOfFruit)); //5

	return 0;
}