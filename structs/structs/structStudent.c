#include <stdio.h>

typedef struct {
	int math;
	int eng;
	double avg;
}Score;

typedef struct {
	int number;    //학번
	char name[20]; //이름
	Score score;   //성적 구조체 변수 선언
}Student;

void calcAvg(Score* score) { //매개변수 - 성적 구조체 포인터
	score->avg = (score->math + score->eng) / 2.0;
}

void showStudentInfo(Student* st) { //매개변수 - 학생 구조체 포인터 
	printf("학번: %d, 이름: %s\n", st->number, st->name);
	printf("수학: %d, 영어: %d\n", st->score.math, st->score.eng);
	printf("평균: %.1lf\n", st->score.avg);
}

int main()
{
	//구조체 변수 생성
	Student s1 = {
		.number = 101,
		.name = "임시현",
		.score = {95, 88, 0}
	};

	//평균 계산
	calcAvg(&s1.score);  //구조체 변수중 score의 주소 전달

	//학생의 정보
	showStudentInfo(&s1); //구조체 변수의 주소를 전달

	return 0;
}