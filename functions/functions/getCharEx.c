#include <stdio.h>
/*
   getchar() - 문자 1개 입력
*/
int main()
{
	char c1, c2;

	c1 = getchar();

	// 이 구문은 엔터를 쳤을때 '\n'은 실행되지 않도록 함
	// 버퍼(임시기억장소)에 남아있던 데이터를 '\n'전까지 삭제(비움)
	//'\n' - 개행(줄바꿈문자) - 아스키코드 10번(LF-Line Feed)
	while (getchar() != '\n'); 

	c2 = getchar();

	printf("%c %c\n", c1, c2);

	return 0;
}