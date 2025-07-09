#include <stdio.h>

int main()
{
	//대입 연산자('=')
	//변수값 교환
	/*int x = 1;
	int y = 2;
	int z;  //교환을 위한 임시 변수

	printf("---------- 교환전 ----------\n");
	printf("x = %d, y = %d\n", x, y);

	//교환
	z = x;
	x = y;
	y = z;

	printf("---------- 교환후 ----------\n");
	printf("x = %d, y = %d\n", x, y); */

	//산술 연산 - +, -, *, /, %
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
	printf("%d\n", a / b); //1(몫)
	printf("%d\n", a % b); //3(나머지)

	printf("%.2f\n", (float)a / b); //1.75


	return 0;
}