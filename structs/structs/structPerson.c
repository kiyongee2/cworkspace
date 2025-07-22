#define _CRT_SECURE_NO_WARNINGS //strcpy() 안전모드
#include <stdio.h>
#include <string.h> //strcpy()
/*
	구조체(struct)
	- 다양한 자료형을 그룹화하여 하나의 변수로
	  처리할수 있게 만든 자료형이다.(복합자료형- 가장 큰 자료형)
	- struct 구조체이름{
		 자료형1;
		 자료형2;
		 ...
	  };
	- 작성은 main() 위쪽에 생성함
*/

struct Person {
	char name[20];  //이름
	int age;        //나이
	float height;   //키
};

int main()
{
	//구조체 변수 - p1
	/*struct Person p1;

	//변수에 접근 - 점(.) 연산자
	//배열에 문자열을 저장하는 함수
	strcpy(p1.name, "이정후");
	p1.age = 26;
	p1.height = 178.4f;*/

	//구조체 변수 선언과 동시에 초기화
	struct Person p1 = { "이정후", 26, 178.4f };

	//출력
	printf("이름: %s\n", p1.name);
	printf("나이: %d\n", p1.age);
	printf("키: %.1f\n", p1.height);

	return 0;
}