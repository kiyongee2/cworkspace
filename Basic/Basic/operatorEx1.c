#include <stdio.h>

int main()
{
	//���� ������('=')
	//������ ��ȯ
	/*int x = 1;
	int y = 2;
	int z;  //��ȯ�� ���� �ӽ� ����

	printf("---------- ��ȯ�� ----------\n");
	printf("x = %d, y = %d\n", x, y);

	//��ȯ
	z = x;
	x = y;
	y = z;

	printf("---------- ��ȯ�� ----------\n");
	printf("x = %d, y = %d\n", x, y); */

	//��� ���� - +, -, *, /, %
	int n = 99;

	n++; //n = n + 1;
	printf("%d\n", n); //100

	n++; 
	printf("%d\n", n); //101

	n--; //n = n - 1;
	printf("%d\n", n); //100

	n--;
	printf("%d\n", n); //99

	int a = 7;
	int b = 4;

	printf("%d\n", a + b); //11
	printf("%d\n", a - b); //5
	printf("%d\n", a * b); //28
	printf("%d\n", a / b); //1(��)
	printf("%d\n", a % b); //3(������)

	printf("%.2f\n", (float)a / b); //1.75


	return 0;
}