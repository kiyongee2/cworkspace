#include <stdio.h>
#include <stdlib.h>

//알파벳 대문자 저장(26)
int main()
{
	//동적 배열 생성
	char* pc;

	pc = (char*)malloc(sizeof(char) * 26);
	if (pc == NULL) {
		printf("동적 메모리 할당에 실패했습니다.\n");
		exit(1); //즉시 종료
	}

	//배열에 저장
	/*pc[0] = 'A';
	pc[1] = 'A' + 1;
	printf("%c %c\n", pc[0], pc[1]);*/
	for (int i = 0; i < 26; i++) {
		pc[i] = 'A' + i;
	}

	for (int i = 0; i < 26; i++) {
		printf("%c ", pc[i]);
	}
	printf("\n");

	//역참조로 저장(포인터)
	/*
	  *pc = 'A';
	  *(pc + 1) = 'A' + 1;
	  printf("%c %c", *pc, *(pc + 1));
	*/
	for (int i = 0; i < 26; i++) {
		*(pc + i) = 'A' + i;
	}

	for (int i = 0; i < 26; i++) {
		printf("%c ", *(pc + i));
	}

	free(pc);  //메모리 해제
	return 0;
}