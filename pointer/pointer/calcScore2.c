#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

/*
   ���� ó�� ���α׷�
*/
//���� ����(���� ����)
bool run = true; //���(����) ����, ����/����
int studentNum;  //�л���
int* score; //���� �迭(���� �Ҵ�)
int choice, sum, max;  //�޴�����, �հ�, �ְ�����
float avg;  //���

//�л��� �Լ� ����
void getStudentNum() {
	if (score != NULL) { //���� �Ҵ��� �Ǿ��ִٸ�
		free(score); //�޸� �ݳ�
		score = NULL;
	}

	printf("�л��� �Է�: ");
	scanf("%d", &studentNum);
	//score�� �迭�� ũ��� �л����� ����
	score = (int*)malloc(sizeof(int) * studentNum);
}

//���� �Է�
void inputScore() {
	if (score == NULL) {
		puts("�л����� ���� �Է��ϼ���");
		return; //��� ����
	}

	for (int i = 0; i < studentNum; i++) {
		printf("score[%d]=", i);   //score[0]=90(�Է�)
		scanf("%d", &score[i]);
	}
}

//���� ����Ʈ
void getScoreList() {
	if (score == NULL) {
		puts("�л����� ���� �Է��ϼ���");
		return; //��� ����
	}

	for (int i = 0; i < studentNum; i++) {
		printf("score[%d]=%d\n", i, score[i]);   //score[0]=90
	}
}

//�м�
void calculate() {
	if (score == NULL) {
		puts("�л����� ���� �Է��ϼ���");
		return; //��� ����
	}

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
}

int main()
{
	while (run) {
		printf("--------------------------------------------------------\n");
		printf("1.�л��� | 2.���� �Է� | 3.���� ����Ʈ | 4. �м� | 5.����\n");
		printf("--------------------------------------------------------\n");
		printf("����> ");

		scanf("%d", &choice); //����� ����

		switch (choice) {
		case 1:
			//�л��� �Լ� ȣ��
			getStudentNum();
			break;
		case 2:
			//���� �Է� ȣ��
			inputScore();
			break;
		case 3:
			//���� ����Ʈ ȣ��
			getScoreList();
			break;
		case 4:
			//�м�(�������, �ְ�����) ȣ��
			calculate();
			break;
		case 5:
			printf("���α׷� ����!");
			run = false;
			break;
		default:
			printf("�߸��� �����Դϴ�. �ٽ� �����ϼ���\n");
			break;
		}
	}

	return 0;
}