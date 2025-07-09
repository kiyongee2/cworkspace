#include <stdio.h>

int main()
{
	//비교 연산자 - (>, <, ==, !=)
	//비교 연산의 결과 - 참(1), 거짓(0)
	printf("%d\n", 5 < 4);  //0
	printf("%d\n", 5 != 4); //1

	int x = 1, y = 2, z = 3;

	printf("%d\n", x > y);  //0
	printf("%d\n", x <= y); //1
	printf("%d\n", x == y); //0
	printf("%d\n", x != y); //1

	printf("--- 논리 연산 ---\n");
	printf("%d\n", (x < y) && (y > z)); //0
	printf("%d\n", (x < y) || (y > z)); //1
	printf("%d\n", !(x < y)); //0

	/*논리 연산 - 2개 이상의 조건을 연산
	  논리곱(and) - &&, 논리합(or) - ||, 부정 - !
	  (둘 다 참일 때 참)
	  T && T = T
	  T && F = F
	  F && T = F
	  F && F = F
	  (둘 중 하나만 참이면 참)
	  T || T = T
	  T || F = T
	  F || T = T
	  F || F = F
	  (조건이 참이면 거짓이고, 거짓이면 참)
	  !T = F
	  !F = T
	 */

	//조건 연산자 - 조건에 맞으면 참이고 아니면 거짓이다.
	// (조건) ? 참 : 거짓
	int value;

	value = (3 > 4) ? 10 : 20;
	printf("%d\n", value);  //20

	int fatherAge = 45;
	int motherAge = 48;
	char result;

	result = (fatherAge > motherAge) ? 'T' : 'F';
	printf("%c\n", result); //F

	//절대값 -5->5, 5->5
	int n = -5;
	int result2;

	//조건식
	result2 = (n < 0) ? -n : n;

	printf("절대값: %d\n", result2);

	return 0;
}