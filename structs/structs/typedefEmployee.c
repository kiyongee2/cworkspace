#define _CRT_SECURE_NO_WARNINGS //strcpy() �������
#include <stdio.h>
#include <string.h> //strcpy()

//Employee ����ü ����
typedef struct {
	int id;
	char name[20];
	int salary;
}Employee;

int main()
{
	//����ü ���� ����(����)
	Employee e1;

	e1.id = 10;
	strcpy(e1.name, "�̻��");
	e1.salary = 3000000;

	//���
	printf("��� ID: %d, �̸�: %s, �޿�: %d\n",
		e1.id, e1.name, e1.salary);

	return 0;
}