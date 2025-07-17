#include <stdio.h>
#include <time.h>  //time 라이브러리
#include <Windows.h> //Sleep()

int main()
{
	//시간 사용, 출력

	time_t now = time(NULL);  //NULL을 매개변수로 사용 - 시간이 변함
	//long now = time(NULL);  //NULL을 매개변수로 사용 - 시간이 변함

	//유닉스 운영체제 개시된 시간
	printf("1970년 1월 1일(자정이후): %ld\n", now); //1752737075초 
	//일로 환산
	printf("1970년 1월 1일(자정이후): %ld\n", now / (24 * 60 * 60)); //20286일
	//년으로 환산
	printf("1970년 1월 1일(자정이후): %ld\n", now / (365 *24 * 60 * 60)); //55년

	//수행(실행) 시간 측정하기
	time_t start, end;  //시작, 종료시간

	start = time(NULL); //시작시간 측정

	//1부터 10까지 출력 - 1초 간격으로 출력
	for (int i = 1; i <= 10; i++) {
		printf("%d\n", i);
		Sleep(500);  //1초 - 1000
	}

	end = time(NULL);
	printf("수행시간: %ld초\n", (end - start));

	return 0;
}