#define _CRT_SECURE_NO_WARNINGS //strcpy() �������
#include <stdio.h>
#include <string.h> //strcpy()
/*
	����ü(struct)
	- �پ��� �ڷ����� �׷�ȭ�Ͽ� �ϳ��� ������
	  ó���Ҽ� �ְ� ���� �ڷ����̴�.(�����ڷ���- ���� ū �ڷ���)
	- struct ����ü�̸�{
		 �ڷ���1;
		 �ڷ���2;
		 ...
	  };
	- �ۼ��� main() ���ʿ� ������
*/

struct Person {
	char name[20];  //�̸�
	int age;        //����
	float height;   //Ű
};

int main()
{
	//����ü �迭 ����
	struct Person p[3] = {
		{"�̻�", 15, 171.9f},
		{"�Ѱ�", 36, 163.4f},
		{"�ں�", 22, 175.1f},
	};
	int i;


	//���
	for (i = 0; i < 3; i++) {
		printf("�̸�: %s, ����: %d, Ű: %.1f\n", 
					p[i].name, p[i].age, p[i].height);
	}

	return 0;
}