#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//���ڿ��� ������ �迭 ����
	//���ڿ��� �������� �ι���('\0')�� ����
	char fr1[5] = "apple";
	char fr2[6] = "apple";
	char fr3[] = "�ٳ���";
	int i;

	/*printf("%c\n", fr1[0]); //a
	printf("%c\n", fr1[4]); //e

	//��ü ��� - ���ڷ� ���� ���(���� - %c)
	for (i = 0; i < 5; i++) {
		printf("%c ", fr1[i]);
	}
	printf("\n");

	//��ü ��� - ���ڿ��� ���(���� - %s)
	printf("%s\n", fr1); //���ڿ� ����
	printf("%s %d\n", fr2, sizeof(fr2)); //apple, 6byte
	printf("%s %d\n", fr3, sizeof(fr3)); //�ٳ���, 7byte*/


	//�Է� ó�� - scanf()
	//������ &(�ּ�)�� ����, �迭 �̸����� �ּ�(&)�� �Ⱥ���
	int age = 21;
	char name[10] = "������";

	printf("%d\n", age);
	printf("%s\n", &name[0]);
	printf("%s\n", name);

	//�޸� �ּ� �ľ�
	printf("%x\n", &age); //5acff864
	printf("%x %x\n", &name[0], &name[1]); //cc6ff9b8 cc6ff9b9
	printf("%x %x\n", name, name + 1);     //cc6ff9b8 cc6ff9b9
	
	//�̸��� ���� �Է¹ޱ�
	printf("�̸� �Է�: ");
	scanf("%s", name);

	printf("���� �Է�: ");
	scanf("%d", &age);

	printf("�̸�: %s, ����: %d\n", name, age);

	return 0;
}