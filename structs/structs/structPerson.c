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
	//����ü ���� - p1
	/*struct Person p1;

	//������ ���� - ��(.) ������
	//�迭�� ���ڿ��� �����ϴ� �Լ�
	strcpy(p1.name, "������");
	p1.age = 26;
	p1.height = 178.4f;*/

	//����ü ���� ����� ���ÿ� �ʱ�ȭ
	struct Person p1 = { "������", 26, 178.4f };

	//���
	printf("�̸�: %s\n", p1.name);
	printf("����: %d\n", p1.age);
	printf("Ű: %.1f\n", p1.height);

	return 0;
}