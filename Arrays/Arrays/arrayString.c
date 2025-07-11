#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//문자열을 저장할 배열 생성
	//문자열의 마지막엔 널문자('\0')가 존재
	char fr1[5] = "apple";
	char fr2[6] = "apple";
	char fr3[] = "바나나";
	int i;

	/*printf("%c\n", fr1[0]); //a
	printf("%c\n", fr1[4]); //e

	//전체 출력 - 문자로 각각 출력(서식 - %c)
	for (i = 0; i < 5; i++) {
		printf("%c ", fr1[i]);
	}
	printf("\n");

	//전체 출력 - 문자열로 출력(서식 - %s)
	printf("%s\n", fr1); //문자열 깨짐
	printf("%s %d\n", fr2, sizeof(fr2)); //apple, 6byte
	printf("%s %d\n", fr3, sizeof(fr3)); //바나나, 7byte*/


	//입력 처리 - scanf()
	//변수는 &(주소)를 붙임, 배열 이름에는 주소(&)를 안붙임
	int age = 21;
	char name[10] = "신유진";

	printf("%d\n", age);
	printf("%s\n", &name[0]);
	printf("%s\n", name);

	//메모리 주소 파악
	printf("%x\n", &age); //5acff864
	printf("%x %x\n", &name[0], &name[1]); //cc6ff9b8 cc6ff9b9
	printf("%x %x\n", name, name + 1);     //cc6ff9b8 cc6ff9b9
	
	//이름과 나이 입력받기
	printf("이름 입력: ");
	scanf("%s", name);

	printf("나이 입력: ");
	scanf("%d", &age);

	printf("이름: %s, 나이: %d\n", name, age);

	return 0;
}