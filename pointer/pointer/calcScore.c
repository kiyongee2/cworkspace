#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

/*
   ���� ó�� ���α׷�
*/

int main()
{
	bool run = true; //���(����) ����, ����/����
	int studentNum;  //�л���
	int* score = NULL; //���� �迭(���� �Ҵ�)
	int choice, sum, max;  //�޴�����, �հ�, �ְ�����
	float avg;  //���

	while (run) {
		printf("--------------------------------------------------------\n");
		printf("1.�л��� | 2.���� �Է� | 3.���� ����Ʈ | 4. �м� | 5.����\n");
		printf("--------------------------------------------------------\n");
		printf("����> ");

		scanf("%d", &choice); //����� ����

		switch (choice) {
		case 1:
			//�л���
			printf("�л��� �Է�: ");
			scanf("%d", &studentNum);
			//score�� �迭�� ũ��� �л����� ����
			score = (int*)malloc(sizeof(int) * studentNum);
			break;
		case 2:
			//���� �Է�
			for (int i = 0; i < studentNum; i++) {
				printf("score[%d]=", i);   //score[0]=90(�Է�)
				scanf("%d", &score[i]);
			}
			break;
		case 3:
			//���� ����Ʈ
			for (int i = 0; i < studentNum; i++) {
				printf("score[%d]=%d\n", i, score[i]);   //score[0]=90
			}
			break;
		case 4:
			//�м�(�������, �ְ�����)
			sum = 0; //�հ� �ʱ�ȭ
			max = score[0]; //�ִ밪 ����
			for (int i = 0; i < studentNum; i++) {
				sum += score[i]; //�հ� ���
				if (max < score[i])
					max = score[i];
			}
			//��� ���
			avg = (float)sum / studentNum;
			printf("��� ����: %.2f��\n", avg);
			printf("�ְ� ����: %d��\n", max);
			break;
		case 5:
			printf("���α׷� ����!");
			run = false;
			break;
		default:
			printf("�߸��� �����Դϴ�. �ٽ� �����ϼ���\n");
			break;
		}
	}//while() ��

	free(score); //�޸� �ݳ�

	return 0;
}