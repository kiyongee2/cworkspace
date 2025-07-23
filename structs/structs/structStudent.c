#include <stdio.h>

typedef struct {
	int math;
	int eng;
	double avg;
}Score;

typedef struct {
	int number;    //�й�
	char name[20]; //�̸�
	Score score;   //���� ����ü ���� ����
}Student;

void calcAvg(Score* score) { //�Ű����� - ���� ����ü ������
	score->avg = (score->math + score->eng) / 2.0;
}

void showStudentInfo(Student* st) { //�Ű����� - �л� ����ü ������ 
	printf("�й�: %d, �̸�: %s\n", st->number, st->name);
	printf("����: %d, ����: %d\n", st->score.math, st->score.eng);
	printf("���: %.1lf\n", st->score.avg);
}

int main()
{
	//����ü ���� ����
	Student s1 = {
		.number = 101,
		.name = "�ӽ���",
		.score = {95, 88, 0}
	};

	//��� ���
	calcAvg(&s1.score);  //����ü ������ score�� �ּ� ����

	//�л��� ����
	showStudentInfo(&s1); //����ü ������ �ּҸ� ����

	return 0;
}