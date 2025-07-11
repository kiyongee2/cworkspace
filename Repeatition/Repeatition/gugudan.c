#include <stdio.h>

int main()
{
	//구구단 전체 출력
	int i, j;  //i-단, j-곱할 변수
	/*for (i = 2; i <= 9; i++) {
		for (j = 1; j <= 9; j++) {
			printf("%d x %d = %d\n", i, j, (i * j));
		}
		printf("\n");
	}*/

	//단보다 곱하는 수가 같거나 작은 경우까지만 출력하기
	//방법1
	/*for (i = 2; i <= 9; i++) {
		for (j = 1; j <= i; j++) {
			printf("%d x %d = %d\n", i, j, (i * j));
		}
		printf("\n");
	}*/

	//방법2
	for (i = 2; i <= 9; i++) {
		for (j = 1; j <= i; j++) {
			if(i >= j)
				printf("%d x %d = %d\n", i, j, (i * j));
		}
		printf("\n");
	}

	return 0;
}