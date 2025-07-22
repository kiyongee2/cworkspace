#include <stdio.h>
#include <math.h> //abs()
/*
   ��ø ����ü
   - ����ü�� ���� ���踦 ���� ��
   - �� ����ü�� ��� ������ �ٸ� ����ü�� ����(���)�� ���
*/

struct Point {
	int x; //��� ����
	int y;
};

struct Rectangle {
	//Point�� ����ü ���� ���
	struct Point p1;
	struct Point p2;
};

int main()
{
	//�簢�� ����ü ���� ����
	/*struct Rectangle rect;

	rect.p1.x = 1;
	rect.p1.y = 5;

	rect.p2.x = 4;
	rect.p2.y = 2;*/

	struct Rectangle rect = {
		.p1 = {1, 5},
		.p2 = {4, 2}
	};
	int width, height; //�ʺ�, ����

	width = abs(rect.p2.x - rect.p1.x);
	height = abs(rect.p2.y - rect.p1.y);

	//���
	printf("��1(%d, %d), ��2(%d, %d)\n", 
			rect.p1.x, rect.p1.y, rect.p2.x, rect.p2.y);

	printf("�ʺ�: %d, ����: %d\n", width, height); //3, 3

	return 0;
}