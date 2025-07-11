//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//회원 정보 입력
	char id[20], password[256], name[30]; //아이디, 비번, 이름
	float weight, height; //몸무게, 키

	printf("===== 회원 정보 입력 =====\n");
	printf("아이디 입력: ");
	//sizeof(id) - 오버플로우 방지(입력크기 제한)
	scanf_s("%s", id, sizeof(id));

	printf("비밀번호 입력: ");
	scanf_s("%s", password, sizeof(password));

	printf("이름 입력: ");
	scanf_s("%s", name, sizeof(name));

	printf("몸무게 입력: ");
	scanf_s("%f", &weight);

	printf("키 입력: ");
	scanf_s("%f", &height);

	printf("===== 회원 정보 출력 =====\n");
	printf("아이디: %s\n", id);
	printf("비밀번호: %s\n", password);
	printf("이름: %s\n", name);
	printf("몸무게: %.1f\n", weight);
	printf("키: %.1f\n", height);
	

	return 0;
}