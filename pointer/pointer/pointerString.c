#define _CRT_SECURE_NO_WARNINGS //strcpy()
#include <stdio.h>
#include <string.h>
//���ڿ� �����ʹ� ���ڿ��� �����ּ�(��ġ)�� ����Ų��.
int main()
{
	char msg[] = "Good Luck";
	char msgCopy[20];
	char* p = msg;  //msg�� �ּҸ� ������ ������

	strcpy(msgCopy, p);
	printf("%s\n", msgCopy);

	printf("==============\n");

	printf("%s\n", msg);
	printf("%s\n", p);

	printf("%s\n", p + 1);
	printf("%s\n", p + 2);
	printf("%s\n", p + 3);
	printf("%s\n", p + 4);


	return 0;
}