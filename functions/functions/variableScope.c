#include <stdio.h>
/*
   ���� ����(global variable) - main()���� ��ġ
   main(), add10() ��� ������ ��ģ��. ���� x�� ������
   main()�� �Լ�() ���ʿ��� ����
   ���α׷��� ����� �Ŀ� �޸𸮿��� �Ҹ��
*/
int x = 1;

int add10();
int main()
{
	int value;

	printf("%d\n", x); //1

	value = add10();

	printf("%d\n", value); //11
	printf("%d\n", x); //11

	return 0;
}

int add10() {
	//int x = 1; //���� ����
	x = x + 10;
	return x;
}