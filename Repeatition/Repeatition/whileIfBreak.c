#include <stdio.h>

int main()
{
	//1 ~ 10���� ���
	//¦���� ���
	/*int n = 1;
	while (1) { //���� �ݺ� - ������ ���̴�.
		if (n > 10) //n=11�϶� 11>10(��) break ����
			break;
		if (n % 2 == 0) {
			printf("%d\n", n);
		}
		n++;  //2, 4, 6, 8, 10
	}*/

	//¦���� ���� 
	int n = 1;
	int count = 0;

	while (1) { //���� �ݺ� - ������ ���̴�.
		if (n > 10) //n=11�϶� 11>10(��) break ����
			break;
		if (n % 2 == 0) {
			count++; //count += 1;
			printf("%d\n", n);
		}
		n++;  //2, 4, 6, 8, 10
	}
	printf("¦���� ����: %d\n", count);

	return 0;
}