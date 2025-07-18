#include <stdio.h>
/*
    2차원 배열 - 문자열을 저장
*/
int main()
{
	char word[] = "apple"; //문자열(1차원 배열)

	//words[단어의 개수][문자열의 최대개수] - 앞 인덱스 생략 가능
	char words[][20] = {
		"apple", 
		"banana", 
		"orange"
	};

	//단어 검색
	printf("%s\n", words[0]); //apple
	printf("%s\n", words[1]); //banana

	//요소의 개수
	int size = sizeof(words) / sizeof(words[0]);

	//전체 출력
	for (int i = 0; i < size; i++) {
		printf("%s ", words[i]);
	}


	return 0;
}