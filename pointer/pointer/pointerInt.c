#include <stdio.h>
/*
   ������(pointer) - �޸� �ּ�(����)�� �����ϴ� ����
   - �����Ҷ� * ��ȣ ���
   - �����ʹ� �ڷ����� ���� ���� ��� 8byte��
*/
int main()
{
	int n = 3;
	int* pn; //������ ������ ����

	pn = &n; //�ּҸ� ����

	//%p, %x -> �ּҸ� ����ϴ� ����
	printf("%d %x\n", n, &n);
	printf("%x %d\n", pn, *pn);  //*pn - ������(������ �� ���)

	//�ڷ����� ũ��
	printf("%dbyte %dbyte\n", sizeof(n), sizeof(pn));

	return 0;
}