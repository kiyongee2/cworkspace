#include <stdio.h>

int main()
{
	//�� ������ - (>, <, ==, !=)
	//�� ������ ��� - ��(1), ����(0)
	printf("%d\n", 5 < 4);  //0
	printf("%d\n", 5 != 4); //1

	int x = 1, y = 2, z = 3;

	printf("%d\n", x > y);  //0
	printf("%d\n", x <= y); //1
	printf("%d\n", x == y); //0
	printf("%d\n", x != y); //1

	printf("--- �� ���� ---\n");
	printf("%d\n", (x < y) && (y > z)); //0
	printf("%d\n", (x < y) || (y > z)); //1
	printf("%d\n", !(x < y)); //0

	/*�� ���� - 2�� �̻��� ������ ����
	  ����(and) - &&, ����(or) - ||, ���� - !
	  (�� �� ���� �� ��)
	  T && T = T
	  T && F = F
	  F && T = F
	  F && F = F
	  (�� �� �ϳ��� ���̸� ��)
	  T || T = T
	  T || F = T
	  F || T = T
	  F || F = F
	  (������ ���̸� �����̰�, �����̸� ��)
	  !T = F
	  !F = T
	 */

	//���� ������ - ���ǿ� ������ ���̰� �ƴϸ� �����̴�.
	// (����) ? �� : ����
	int value;

	value = (3 > 4) ? 10 : 20;
	printf("%d\n", value);  //20

	int fatherAge = 45;
	int motherAge = 48;
	char result;

	result = (fatherAge > motherAge) ? 'T' : 'F';
	printf("%c\n", result); //F

	//���밪 -5->5, 5->5
	int n = -5;
	int result2;

	//���ǽ�
	result2 = (n < 0) ? -n : n;

	printf("���밪: %d\n", result2);

	return 0;
}