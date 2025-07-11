#include <stdio.h>
/*
   반복문 - while, for
     초기값
     while(조건식){ //종료값
        실행문
		증감값
	 }
*/
int main()
{
	//조건 - "안녕" 10번
	/*int n = 1;
	while (n <= 10) {
		printf("안녕~ %d\n", n);
		n++;
	}*/
	
	//조건 - 1 ~ 10까지 출력
	//2 - 홀수만 출력
	/*int n = 1;
	while (n <= 10) {
		if (n % 2 == 1) {
			// %3d - 세칸을 차지하고 오른쪽 정렬
			printf("%-3d", n);
		}
		n++;
	}*/
	
	//조건 - 1 ~ 10까지 합계
	int n = 1;
	int sum = 0;
	/*
		sum = 0,
		sum = sum + 1 = 1
		sum = sum + 2 = 3
		sum = sum + 3 = 6
		...       + 10 = ?
	    sum = sum + n
	*/ 
	while (n <= 10) {
		sum += n; //sum = sum + n;
		printf("n = %d, sum = %d\n", n, sum);
		n++;
	}
	printf("sum = %d, n = %d\n", sum, n);
	
	/*int a = 1;
	printf("%d\n", a);  //1

	a++;  //a += 1;
	printf("%d\n", a);  //2

	a--;
	printf("%d\n", a);  //1*/

	return 0;
}