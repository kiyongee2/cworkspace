#include <stdio.h>
#include <stdlib.h>

//���ĺ� �빮�� ����(26)
int main()
{
	//���� �迭 ����
	char* pc;

	pc = (char*)malloc(sizeof(char) * 26);
	if (pc == NULL) {
		printf("���� �޸� �Ҵ翡 �����߽��ϴ�.\n");
		exit(1); //��� ����
	}

	//�迭�� ����
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

	//�������� ����(������)
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

	free(pc);  //�޸� ����
	return 0;
}