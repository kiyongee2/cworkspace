#include <stdio.h>

int square(int x) { 
	//���簢�� = ���� x ����
	return x * x;
}

float triangle(int x, int y) {
	//�ﰢ�� = �غ� x ���� / 2
	/*���� ����(local variable)
	  �Լ��� ��� ���ȿ��� �����ǰ�,
	  ȣ��� �� �޸𸮿��� �Ҹ�(����)��*/
	float result = 0; 
	//result = (x * y) / 2.0; //�Ǽ������� �ڵ� ����ȯ
	result = (float)(x * y) / 2; //�Ǽ������� ���� ����ȯ
	return result;
}

//���� ����
int num = 100;

int main()
{
	int val1;    //main()�� ��������
	float val2;

	val1 = square(4);
	val2 = triangle(3, 5);

	printf("���簢���� ����: %dcm\n", val1);
	printf("�ﰢ���� ����: %.1fcm\n", val2);

	//printf("%d\n", result); //������ �����̹Ƿ� ȣ���� �� ����
	printf("%d\n", num); //100

	return 0;
}










