#include <stdio.h>
/*
   getchar() - ���� 1�� �Է�
*/
int main()
{
	char c1, c2;

	c1 = getchar();

	// �� ������ ���͸� ������ '\n'�� ������� �ʵ��� ��
	// ����(�ӽñ�����)�� �����ִ� �����͸� '\n'������ ����(���)
	//'\n' - ����(�ٹٲ޹���) - �ƽ�Ű�ڵ� 10��(LF-Line Feed)
	while (getchar() != '\n'); 

	c2 = getchar();

	printf("%c %c\n", c1, c2);

	return 0;
}