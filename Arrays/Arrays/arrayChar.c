#include <stdio.h>

int main()
{
	//���ڸ� ������ �迭 ����
	//�迭�� �ε��� ũ��� ����� �������� ũ�ų� ���ƾ� ��
	char msg[6] = { 'h', 'e', 'l', 'l', 'o' };
	int i;  //�ݺ� ����

	//Ư�� ���
	printf("%c\n", msg[1]); //e

	//��ü ���
	for (i = 0; i < 5; i++) {
		printf("%c ", msg[i]);
	}
	printf("\n");
	//hello -> yellow�� ����

	// h -> y�� ����
	msg[0] = 'y';

	//��� �߰�
	msg[5] = 'w';

	//��ü ���
	for (i = 0; i < 6; i++) {
		printf("%c ", msg[i]);
	}

	return 0;
}





