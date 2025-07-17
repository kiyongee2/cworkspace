#include <stdio.h>

int main()
{
	char c;
	char* pc;

	c = 'A';
	pc = &c;

	//포인터 수정
	*pc = 'B';

	printf("%c %p\n", c, &c);
	printf("%c %p\n", *pc, pc);

	//자료형 크기
	printf("%d %d\n", sizeof(c), sizeof(pc)); //1, 8
	

	return 0;
}