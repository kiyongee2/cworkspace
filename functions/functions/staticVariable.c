#include <stdio.h>

/*
   ���� ����(static variable)
   - �����տ� static Ű���带 ����
   - �Լ� ���ȿ��� ��������ȭ ��
   - �Լ��� ��� ���ȿ��� �����ǰ�,
   - ���α׷��� ����Ǹ� �޸𸮿��� �Ҹ���
*/

//int x = 0; //���� ����

void call() {
	//int x = 0;      //���� ����
	static int x = 0; //���� ����(���� ����ȭ)

	x++;  //x = x + 1
	printf("���� %d��° ȣ��Ǿ����ϴ�.\n", x);
}

int main()
{
	call();
	call();
	call();

	return 0;
}