
#include <stdio.h>
//5���� ������ �迭�� �Է¹޾� �ּҰ� ���

int main()
{
	int arr[5];
	int idx = 0; //�迭�� �ε���
	int min = 9999; //�ſ� ū ������ �ּҰ� ����

	while (idx < 5) {
		printf("%d��°�� �� �Է�: ", idx + 1);
		scanf_s("%d", &arr[idx]);
		if (min > arr[idx])
			min = arr[idx];
		idx++; //���� �ε��� ����
	}
	printf("�ּҰ��� %d\n", min);

	return 0;
}