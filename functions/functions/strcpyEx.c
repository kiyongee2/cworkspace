#include <stdio.h>
/*
   strcpy(저장할 공간, 저장할 문자) - 문자 복사, 저장
   strlen(문자열) - 문자열의 개수
*/
int main()
{
	char msg1[] = "Good Luck!";
	int len;
	char msg2[20];

	//문자열의 개수
	len = strlen(msg1);

	printf("msg1: %s\n", msg1);
	printf("%d\n", len); //10(공백문자 포함)

	//문자열 복사
	strcpy(msg2, msg1);

	printf("msg2: %s\n", msg2);

	return 0;
}