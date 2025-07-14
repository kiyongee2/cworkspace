#include <stdio.h>
/*
    �迭�� ����
	- ����� ����, �հ�, ���, �ִ�, �ּҰ�
	- �ִ밪 �˰���
	  1. �ִ밪 ���� - �迭�� ù��°��
	  2. �ִ밪 ���� ��� ���� �ִ밪 ����(�ݺ�)
*/
int main()
{
	//���� ���� - �л� 1���� 5 ������ ����
	int score[5] = {85, 75, 90, 74, 80};
	int i;
	int sum = 0;   //�հ�
	float average; //���
	int maxVal;    //�ִ밪

	//�迭�� ũ�� - ����� ��
	int size = sizeof(score) / sizeof(score[0]);
	printf("%d\n", sizeof(score)); //20byte(int�� 4byte)
	printf("%d\n", size); //5

	maxVal = score[0]; //�ִ밪 ����

	for (i = 0; i < size; i++) {
		sum += score[i]; //sum = sum + score[i];
		if (maxVal < score[i]) {
			maxVal = score[i];
		}
	}
	/*
	    sum = sum + score[0] = 0 + 85
	    sum = sum + score[1] = 85 + 75
	    sum = sum + score[2] = 85 + 75 + 90
	    sum = sum + score[3] = 85 + 75 + 90 + 75
	    sum = sum + score[4] = 85 + 75 + 90 + 75 + 80
	
	*/
	//���
	average = (float)sum / size;

	printf("�հ�: %d\n", sum);
	printf("���: %.1f\n", average);
	printf("�ִ밪: %d", maxVal);

	return 0;
}