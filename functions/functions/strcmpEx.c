#include <stdio.h>
/*
    strcmp(str1, str2) - 문자열 비교
	- 결과값: 1 - 불일치, 0 - 일치
*/
int main()
{
	int n1 = 12;
	int n2 = 13;
	char greet1[] = "bye";
	char greet2[] = "bye";

	/*
	  숫자 비교는 동등 연산자(==, !=) 사용
	if (n1 == n2) {
		printf("두 수가 같습니다.");
	}
	else {
		printf("두 수가 같지 않습니다.");
	}*/

	printf("%d\n", strcmp(greet1, greet2)); //1

	if (strcmp(greet1, greet2) == 0) {
		puts("두 문자열이 일치합니다.");
	}
	else {
		puts("두 문자열이 일치하지 않습니다.");
	}


	return 0;
}