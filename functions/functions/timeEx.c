#include <stdio.h>
#include <time.h>  //time ���̺귯��
#include <Windows.h> //Sleep()

int main()
{
	//�ð� ���, ���

	time_t now = time(NULL);  //NULL�� �Ű������� ��� - �ð��� ����
	//long now = time(NULL);  //NULL�� �Ű������� ��� - �ð��� ����

	//���н� �ü�� ���õ� �ð�
	printf("1970�� 1�� 1��(��������): %ld\n", now); //1752737075�� 
	//�Ϸ� ȯ��
	printf("1970�� 1�� 1��(��������): %ld\n", now / (24 * 60 * 60)); //20286��
	//������ ȯ��
	printf("1970�� 1�� 1��(��������): %ld\n", now / (365 *24 * 60 * 60)); //55��

	//����(����) �ð� �����ϱ�
	time_t start, end;  //����, ����ð�

	start = time(NULL); //���۽ð� ����

	//1���� 10���� ��� - 1�� �������� ���
	for (int i = 1; i <= 10; i++) {
		printf("%d\n", i);
		Sleep(500);  //1�� - 1000
	}

	end = time(NULL);
	printf("����ð�: %ld��\n", (end - start));

	return 0;
}