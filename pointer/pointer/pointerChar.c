#include <stdio.h>

int main()
{
	char c;
	char* pc;

	c = 'A';
	pc = &c;

	//������ ����
	*pc = 'B';

	printf("%c %p\n", c, &c);
	printf("%c %p\n", *pc, pc);

	//�ڷ��� ũ��
	printf("%d %d\n", sizeof(c), sizeof(pc)); //1, 8
	

	return 0;
}