#include <stdio.h>
/*
   �ݺ��� - while, for
     �ʱⰪ
     while(���ǽ�){ //���ᰪ
        ���๮
		������
	 }
*/
int main()
{
	//���� - "�ȳ�" 10��
	/*int n = 1;
	while (n <= 10) {
		printf("�ȳ�~ %d\n", n);
		n++;
	}*/
	
	//���� - 1 ~ 10���� ���
	//2 - Ȧ���� ���
	/*int n = 1;
	while (n <= 10) {
		if (n % 2 == 1) {
			// %3d - ��ĭ�� �����ϰ� ������ ����
			printf("%-3d", n);
		}
		n++;
	}*/
	
	//���� - 1 ~ 10���� �հ�
	int n = 1;
	int sum = 0;
	/*
		sum = 0,
		sum = sum + 1 = 1
		sum = sum + 2 = 3
		sum = sum + 3 = 6
		...       + 10 = ?
	    sum = sum + n
	*/ 
	while (n <= 10) {
		sum += n; //sum = sum + n;
		printf("n = %d, sum = %d\n", n, sum);
		n++;
	}
	printf("sum = %d, n = %d\n", sum, n);
	
	/*int a = 1;
	printf("%d\n", a);  //1

	a++;  //a += 1;
	printf("%d\n", a);  //2

	a--;
	printf("%d\n", a);  //1*/

	return 0;
}