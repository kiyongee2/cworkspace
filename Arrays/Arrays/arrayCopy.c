#include <stdio.h>

int main()
{
	//���ڿ� ������ �迭 ����
	char a1[] = "NET"; //���ڿ��� ���� '\0' ��(NUL)���� ����
	char a2[4]; //�� �迭�� ũ�� - 4byte
	int i;

	//printf("%s", a1);
	printf("%c\n", a1[0]); //N
	printf("%c\n", a1[3]); //'\0'
	printf("%c\n", a1[1]); //E
	printf("%c\n", a1[2]); //T

	//�迭 a1�� ��Ҹ� �迭 a2�� ����
	for (i = 0; i < 4; i++) {
		a2[i] = a1[i];
	}

	//���
	for (i = 0; i < 4; i++) {
		printf("%c", a2[i]);
	}
	printf("\n");

	//a1�� a3�� �Ųٷ� ����
	char a3[4];
	for (i = 0; i < 4; i++) {
		a3[i] = a1[2-i];
	}
	a3[3] = '\0'; //�ι��ڸ� �� �ε����� ����

	printf("%s", a3);

	return 0;
}