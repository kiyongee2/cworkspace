#include <stdio.h>

int main()
{
	//���ĺ� �ҹ��ڸ� ������ 26���� �迭 ����
	char alphabets[26];
	char ch = 'a';
	int i;

	//��ü ����
	for (i = 0; i < 26; i++) {
		alphabets[i] = ch;
		ch++;
	}

	//��ü ���
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