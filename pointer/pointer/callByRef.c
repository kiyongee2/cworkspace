#include <stdio.h>

void callByVal(int); //���� �̸��� ���� ����
void callByRef(int*);
int main()
{
	int num = 10;

	puts("-- ���� ���� ȣ�� --");
	callByVal(num);
	printf("%d\n", num); //10

	puts("-- �ּҿ� ���� ȣ�� --");
	callByRef(&num);
	printf("%d\n", num); //11

	return 0;
}

//�� ȣ�� �Լ� ����
void callByVal(int n) {
	n++;
	printf("%d\n", n); //11
}

//���� ȣ�� �Լ� ����
void callByRef(int* p) {
	*p += 1; //*p = *p + 1;
	printf("%d\n", *p); //11
}