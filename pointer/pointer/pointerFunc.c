#define _CRT_SECURE_NO_WARNINGS //strcpy()
#include <stdio.h>
#include <string.h> //strcpy()

//�迭�� �̿��ؼ� ���� - int a[]
//�����͸� �̿��ؼ� ���� - int* ptr
void changeArray(int* ptr) { //ptr = arr
	//��� ����
	ptr[1] = 50;
}

//���ڿ� ��ȯ �Լ�
char* message() {
	return "����� �����!";
}

int main()
{
	//�迭�� ��� ����
	int arr[] = { 10, 20, 30 };
	changeArray(arr); //�Լ� ȣ��

	for (int i = 0; i < 3; i++) {
		printf("%d\n", arr[i]);
	}

	//���ڿ� ��ȯ�ϱ�
	char msg[50];

	//strcpy(������ ����, ���ڿ�)
	strcpy(msg, message());
	printf("%s\n", msg);

	return 0;
}