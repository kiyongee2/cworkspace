#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//숫자 입력시 문자가 입력된 경우 오류 처리
int getValidInt() {
	int num;
	while (1) {
		printf("정수를 입력하세요: ");
		int value = scanf("%d", &num);
		if (value == 1) {
			return num; 
		}
		else {
			printf("유효한 정수를 입력하세요.\n");
			while (getchar() != '\n');
		}
	}
}

int main()
{
	int number = getValidInt();

	printf("입력한 숫자: %d\n", number);

	return 0;
}