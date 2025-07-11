#include <stdio.h>

int main()
{
	//1 ~ 10까지 출력
	//짝수만 출력
	/*int n = 1;
	while (1) { //무한 반복 - 조건이 참이다.
		if (n > 10) //n=11일때 11>10(참) break 실행
			break;
		if (n % 2 == 0) {
			printf("%d\n", n);
		}
		n++;  //2, 4, 6, 8, 10
	}*/

	//짝수의 개수 
	int n = 1;
	int count = 0;

	while (1) { //무한 반복 - 조건이 참이다.
		if (n > 10) //n=11일때 11>10(참) break 실행
			break;
		if (n % 2 == 0) {
			count++; //count += 1;
			printf("%d\n", n);
		}
		n++;  //2, 4, 6, 8, 10
	}
	printf("짝수의 개수: %d\n", count);

	return 0;
}