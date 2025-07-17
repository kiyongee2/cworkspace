#include <stdio.h>
//문자열 포인터는 문자열의 시작주소(위치)를 가리킨다.
int main()
{
	char msg[] = "Good Luck";
	char* p = msg;  //msg의 주소를 저장한 포인터

	printf("%s\n", msg);
	printf("%s\n", p);

	printf("%s\n", p + 1);
	printf("%s\n", p + 2);
	printf("%s\n", p + 3);
	printf("%s\n", p + 4);


	return 0;
}