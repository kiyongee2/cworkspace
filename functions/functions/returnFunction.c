#include <stdio.h>
/*
    �Լ��� ����
	 - void�� �Լ�
	 - return�� �ִ� �Լ�
*/
//�������� ����ϴ� �Լ� ����

int square(int x) { //int x = 3
	return x * x;
}

//���밪�� ����ϴ� �Լ�
//������ �����, ����� ����� ��ȯ
int myAbs(int x) {
	if (x < 0)
		return -x;
	else
		return x;
}

char* message() {
	return "����� �����~";
}

int main()
{
	int value1, value2;

	value1 = square(3); //ȣ��
	value2 = myAbs(-4);

	printf("������: %d\n", value1);
	printf("���밪: %d\n", value2);
	printf("�޽���: %s\n", message());
	

	return 0;
}