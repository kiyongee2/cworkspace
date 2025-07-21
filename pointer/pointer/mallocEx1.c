#include <stdio.h>
#include <stdlib.h> //malloc(), free()
/*
   //�޸� ���� - ��(Heap) ����
   malloc() - �޸� ���� �Ҵ�
   free() - �޸� �ݳ�
   1. �����͸� �غ�

   //���� �Ҵ� - ����(stack) ����
*/
int main()
{
	//int n[5]; //���� �Ҵ�

	//���� �迭 �Ҵ� - �����͸� ���
	int* pn = (int*)malloc(sizeof(int) * 5);
	if (pn == NULL) {
		printf("���� �޸� �Ҵ翡 �����߽��ϴ�.\n");
		exit(1);
	}

	/*pn[0] = 2;
	printf("%d\n", pn[0]);*/

	//2�� ��� ����(1 ~ 10)
	for (int i = 0; i < 5; i++) {
		pn[i] = (i + 1) * 2;
	}

	for (int i = 0; i < 5; i++) {
		printf("%d ", pn[i]); //2 4 6 8 10
	}

	free(pn); //�޸� �ݳ�

	return 0;
}