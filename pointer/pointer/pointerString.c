#include <stdio.h>
//���ڿ� �����ʹ� ���ڿ��� �����ּ�(��ġ)�� ����Ų��.
int main()
{
	char msg[] = "Good Luck";
	char* p = msg;  //msg�� �ּҸ� ������ ������

	printf("%s\n", msg);
	printf("%s\n", p);

	printf("%s\n", p + 1);
	printf("%s\n", p + 2);
	printf("%s\n", p + 3);
	printf("%s\n", p + 4);


	return 0;
}