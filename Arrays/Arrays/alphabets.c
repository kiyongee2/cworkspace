#include <stdio.h>

int main()
{
	//알파벳 소문자를 저장할 26개의 배열 생성
	char alphabets[26];
	char ch = 'a';
	int i;

	//전체 저장
	for (i = 0; i < 26; i++) {
		alphabets[i] = ch;
		ch++;
	}

	//전체 출력
	for (i = 0; i < 26; i++) {
		printf("%c %d\n", alphabets[i], alphabets[i]);
	}



	/*printf("%c %d\n", ch, ch); //a, 97

	ch++; //ch = ch + 1;
	printf("%c\n", ch); //b

	ch++;
	printf("%c\n", ch); //c*/

	return 0;
}