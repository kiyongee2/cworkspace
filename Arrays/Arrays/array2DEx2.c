#include <stdio.h>
/*
    2���� �迭 - ���ڿ��� ����
*/
int main()
{
	char word[] = "apple"; //���ڿ�(1���� �迭)

	//words[�ܾ��� ����][���ڿ��� �ִ밳��] - �� �ε��� ���� ����
	char words[][20] = {
		"apple", 
		"banana", 
		"orange"
	};

	//�ܾ� �˻�
	printf("%s\n", words[0]); //apple
	printf("%s\n", words[1]); //banana

	//����� ����
	int size = sizeof(words) / sizeof(words[0]);

	//��ü ���
	for (int i = 0; i < size; i++) {
		printf("%s ", words[i]);
	}


	return 0;
}