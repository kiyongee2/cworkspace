#include <stdio.h>
#include <stdlib.h> //malloc(), free()
/*
   //메모리 영역 - 힙(Heap) 영역
   malloc() - 메모리 동적 할당
   free() - 메모리 반납
   1. 포인터를 준비

   //정적 할당 - 스택(stack) 영역
*/
int main()
{
	//int n[5]; //정적 할당

	//동적 배열 할당 - 포인터를 사용
	int* pn = (int*)malloc(sizeof(int) * 5);
	if (pn == NULL) {
		printf("동적 메모리 할당에 실패했습니다.\n");
		exit(1);
	}

	/*pn[0] = 2;
	printf("%d\n", pn[0]);*/

	//2의 배수 저장(1 ~ 10)
	for (int i = 0; i < 5; i++) {
		pn[i] = (i + 1) * 2;
	}

	for (int i = 0; i < 5; i++) {
		printf("%d ", pn[i]); //2 4 6 8 10
	}

	free(pn); //메모리 반납

	return 0;
}