#include <stdio.h>
/*
   strcpy(������ ����, ������ ����) - ���� ����, ����
   strlen(���ڿ�) - ���ڿ��� ����
*/
int main()
{
	char msg1[] = "Good Luck!";
	int len;
	char msg2[20];

	//���ڿ��� ����
	len = strlen(msg1);

	printf("msg1: %s\n", msg1);
	printf("%d\n", len); //10(���鹮�� ����)

	//���ڿ� ����
	strcpy(msg2, msg1);

	printf("msg2: %s\n", msg2);

	return 0;
}