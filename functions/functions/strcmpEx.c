#include <stdio.h>
/*
    strcmp(str1, str2) - ���ڿ� ��
	- �����: 1 - ����ġ, 0 - ��ġ
*/
int main()
{
	int n1 = 12;
	int n2 = 13;
	char greet1[] = "bye";
	char greet2[] = "bye";

	/*
	  ���� �񱳴� ���� ������(==, !=) ���
	if (n1 == n2) {
		printf("�� ���� �����ϴ�.");
	}
	else {
		printf("�� ���� ���� �ʽ��ϴ�.");
	}*/

	printf("%d\n", strcmp(greet1, greet2)); //1

	if (strcmp(greet1, greet2) == 0) {
		puts("�� ���ڿ��� ��ġ�մϴ�.");
	}
	else {
		puts("�� ���ڿ��� ��ġ���� �ʽ��ϴ�.");
	}


	return 0;
}