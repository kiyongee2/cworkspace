#include <stdio.h>
/*
   포인터(pointer) - 메모리 주소(번지)를 저장하는 변수
   - 선언할때 * 기호 사용
   - 포인터는 자료형에 관계 없이 모두 8byte임
*/
int main()
{
	int n = 3;
	int* pn; //정수형 포인터 선언

	pn = &n; //주소를 저장

	//%p, %x -> 주소를 출력하는 서식
	printf("%d %x\n", n, &n);
	printf("%x %d\n", pn, *pn);  //*pn - 역참조(변수의 값 출력)

	//자료형의 크기
	printf("%dbyte %dbyte\n", sizeof(n), sizeof(pn));

	return 0;
}