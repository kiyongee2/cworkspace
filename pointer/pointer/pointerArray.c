#include <stdio.h>
/*
   �����ʹ� �迭�� ù��° �׸� �ּҸ� ����
*/
int main()
{
	int a[4] = { 10, 20, 30, 40 };
	int* pa;

	//�迭�� �̸��� �迭�� ���� �ּ��̴�.
	/*printf("%d %x %x\n", a[0], &a[0], a);  //a + 0
	printf("%d %x %x\n", a[1], &a[1], a + 1);
	printf("%d %x %x\n", a[2], &a[2], a + 2);*/

	pa = a;  //&a[0]

	//�������� ���� �ּҴ� ��ȣ�� ����ؾ� ��
	/*printf("%x %d\n", pa, *pa); //pa + 0, *(pa + 0), 10
	printf("%x %d\n", pa + 1, *(pa + 1)); //20*/

	for (int i = 0; i < 4; i++) {
		printf("%x %d\n", pa + i, *(pa + i));
	}


	return 0;
}