#include <stdio.h>
/*
    �Լ�(function)
	- Ư���� ����� �����ϴ� ���α׷��̴�.
	- �Լ��� �����(����) ȣ���Ͽ� ����Ѵ�.

*/
void sayHello(); //�Լ� �����
void sayHello2(char name[]);
int main()
{
	sayHello(); //�Լ� �̸� ȣ��

	sayHello2("����"); //�̸��� �θ��� �Լ� ȣ��
	sayHello2("Elsa");

	return 0;
}

//void - ��ȯ�� �ڷᰡ ����
void sayHello() {
	printf("�ȳ��ϼ���~\n");
}

//�Ű� ����(���� ����) - char name[]
void sayHello2(char name[]) { //char name[] = "����"
	printf("%s��~ �ȳ��ϼ���~!\n", name);
}