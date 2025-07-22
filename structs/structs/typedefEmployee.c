#define _CRT_SECURE_NO_WARNINGS //strcpy() 안전모드
#include <stdio.h>
#include <string.h> //strcpy()

//Employee 구조체 정의
typedef struct {
	int id;
	char name[20];
	int salary;
}Employee;

int main()
{
	//구조체 변수 선언(생성)
	Employee e1;

	e1.id = 10;
	strcpy(e1.name, "이사원");
	e1.salary = 3000000;

	//출력
	printf("사원 ID: %d, 이름: %s, 급여: %d\n",
		e1.id, e1.name, e1.salary);

	return 0;
}