#include <stdio.h>
/*
   포인터는 배열의 첫번째 항목 주소를 저장
*/
int main()
{
	int a[4] = { 10, 20, 30, 40 };
	int* pa;

	//배열의 이름은 배열의 시작 주소이다.
	/*printf("%d %x %x\n", a[0], &a[0], a);  //a + 0
	printf("%d %x %x\n", a[1], &a[1], a + 1);
	printf("%d %x %x\n", a[2], &a[2], a + 2);*/

	pa = a;  //&a[0]

	//포인터의 다음 주소는 괄호를 사용해야 함
	/*printf("%x %d\n", pa, *pa); //pa + 0, *(pa + 0), 10
	printf("%x %d\n", pa + 1, *(pa + 1)); //20*/

	for (int i = 0; i < 4; i++) {
		printf("%x %d\n", pa + i, *(pa + i));
	}


	return 0;
}