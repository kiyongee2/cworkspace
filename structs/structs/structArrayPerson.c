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
	//구조체 배열 선언
	struct Person p[3] = {
		{"이산", 15, 171.9f},
		{"한강", 36, 163.4f},
		{"박봄", 22, 175.1f},
	};
	int i;


	//출력
	for (i = 0; i < 3; i++) {
		printf("이름: %s, 나이: %d, 키: %.1f\n", 
					p[i].name, p[i].age, p[i].height);
	}

	return 0;
}