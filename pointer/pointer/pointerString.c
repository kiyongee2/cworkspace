#define _CRT_SECURE_NO_WARNINGS //strcpy()
#include <stdio.h>
#include <string.h>
//문자열 포인터는 문자열의 시작주소(위치)를 가리킨다.
int main()
{
	char msg[] = "Good Luck";
	char msgCopy[20];
	char* p = msg;  //msg의 주소를 저장한 포인터

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