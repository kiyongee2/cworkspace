#include <stdio.h>

int main()
{
	int x = 10, y = 20, z;
	int* arr[3];  //������ 3���� ������ ������ �迭

	//�迭�� �ּ� ����
	arr[0] = &x;
	arr[1] = &y;
	arr[2] = &z;

	//int* arr[3] = { &x, &y, &z }; //����� �Բ� �ʱ�ȭ

	//����
	*arr[2] = *arr[0] + *arr[1];

	printf("%d %d\n", *arr[2], z); //30 30

	return 0;
}