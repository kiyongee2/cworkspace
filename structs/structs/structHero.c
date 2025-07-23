#include <stdio.h>

//Hero 구조체 정의
typedef struct {
	int no;
	char name[20];
	int age;
}Hero;

int main()
{
	//구조체 변수 선언(생성)
	Hero p1 = { 1, "강감찬", 75 };

	//구조체 포인터 선언(생성)
	Hero p2 = { 2, "이순신", 54 };
	Hero* ptr = &p2;  //구조체 변수 p2의 주소 저장

	//정보 출력 - 점 연산자로 속성에 접근
	printf("번호: %d, 이름: %s, 나이:  %d\n",
		p1.no, p1.name, p1.age);

	//정보 출력 - 구조체 포인터: 화살표(->) 연산자로 속성에 접근
	printf("번호: %d, 이름: %s, 나이:  %d\n",
		ptr->no, ptr->name, ptr->age);

	return 0;
}