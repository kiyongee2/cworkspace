#include <stdio.h>

int main()
{
	printf("----- char �ڷ��� -----\n");
	//char - 1byte(8bit) : -128 ~ 127
	char ch = 'C';
	char value = -128;
	char value2 = 128;

	printf("%c %d\n", ch, ch); //C 67(�ƽ�Ű �ڵ尪)
	printf("%d\n", value); //-128
	printf("%d\n", value2); //128 (�����÷ο�, overflow), ��ȯ��

	//short - 2byte(16bit), -32000 ~ 32000
	short value3 = 128;
	printf("%d\n", value3); //128

	printf("----- int �ڷ��� -----\n");
	//int - 4byte(32bit) : -21�� ~ 21��
	int iNum = 2100000000;
	int iNum2 = 2200000000;
	printf("%d\n", iNum); 
	printf("%d\n", iNum2); //(�����÷ο�, overflow), ��ȯ��

	//long - window (4����Ʈ), mac os- (8byte)
	//long long - 8����Ʈ
	long long lNum = 2200000000L;
	printf("%lld\n", lNum);

	printf("----- double �ڷ��� -----\n");
	//float - 4byte, �Ҽ� 6�ڸ����� ���
	float fNum = 0.1234567F;
	printf("%f\n", fNum); //0.123457

	//double - 8byte, �Ҽ� 15�ڸ����� ���
	double dNum = 0.1234567890123456;
	printf("%.15lf\n", dNum);

	return 0;
}