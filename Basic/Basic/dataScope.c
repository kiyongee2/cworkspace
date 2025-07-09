#include <stdio.h>

int main()
{
	printf("----- char 자료형 -----\n");
	//char - 1byte(8bit) : -128 ~ 127
	char ch = 'C';
	char value = -128;
	char value2 = 128;

	printf("%c %d\n", ch, ch); //C 67(아스키 코드값)
	printf("%d\n", value); //-128
	printf("%d\n", value2); //128 (오버플로우, overflow), 순환됨

	//short - 2byte(16bit), -32000 ~ 32000
	short value3 = 128;
	printf("%d\n", value3); //128

	printf("----- int 자료형 -----\n");
	//int - 4byte(32bit) : -21억 ~ 21억
	int iNum = 2100000000;
	int iNum2 = 2200000000;
	printf("%d\n", iNum); 
	printf("%d\n", iNum2); //(오버플로우, overflow), 순환됨

	//long - window (4바이트), mac os- (8byte)
	//long long - 8바이트
	long long lNum = 2200000000L;
	printf("%lld\n", lNum);

	printf("----- double 자료형 -----\n");
	//float - 4byte, 소수 6자리까지 계산
	float fNum = 0.1234567F;
	printf("%f\n", fNum); //0.123457

	//double - 8byte, 소수 15자리까지 계산
	double dNum = 0.1234567890123456;
	printf("%.15lf\n", dNum);

	return 0;
}