#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <string.h> //strcmp()

#define MAX_ACCOUNTS 100 //�ִ� ���¼�
#define ANO_LEN 20    //���¹�ȣ ũ��
#define OWNER_LEN 40  //������ ũ��

//���� ���� ����ü ����
typedef struct {
	//��� ���� - ���¹�ȣ, ������, �ܰ�
	char ano[ANO_LEN];
	char owner[OWNER_LEN];
	int balance;
}BankAccount;

//���� ����
BankAccount accounts[MAX_ACCOUNTS]; //���� �迭 ����
int idxOfAccounts;  //�迭�� �ε���

//���� ����
void createAccount() {
	char accountNumber[ANO_LEN]; //�ܺ� �Է�(���� ��ȣ)

	if (idxOfAccounts >= MAX_ACCOUNTS) {
		printf("�� �̻� ���¸� ������ �� �����ϴ�.");
		return;
	}

	printf("���� ��ȣ �Է�(��: xxx-xxx-xxxx): ");
	scanf("%s", accountNumber);

	//���� �ߺ� �˻�
	for (int i = 0; i < idxOfAccounts; i++) {
		if (strcmp(accounts[i].ano, accountNumber) == 0) {
			printf("�̹� ��ϵ� �����Դϴ�. �ٽ� �Է��ϼ���.\n");
			return;
		}
	}

	//�ߺ��� ������ ���� ����
	strcpy(accounts[idxOfAccounts].ano, accountNumber);  //���¹�ȣ ����

	printf("������ �Է�: ");
	scanf("%s", accounts[idxOfAccounts].owner);

	accounts[idxOfAccounts].balance = 0; //�ܰ� �ʱ�ȭ
	printf("���: ���°� �����Ǿ����ϴ�.(���¹�ȣ: %s)\n",
		accounts[idxOfAccounts].ano);

	idxOfAccounts++;  //���� �ε����� 1 ����
}

//���� ���
void displayAccounts() {
	printf("********** ��  ��  ��  ��  **********\n");

	if (idxOfAccounts == 0) {
		printf("��ϵ� ���°� �����ϴ�.\n");
		return;
	}
	
	for (int i = 0; i < idxOfAccounts; i++) {
		printf("���� ��ȣ: %s, ������: %s, �ܰ�: %d\n",
			accounts[i].ano, accounts[i].owner, accounts[i].balance);
	}
}

//����
void deposit() {
	char accountNumber[ANO_LEN]; //�ܺ� �Է�(���� ��ȣ)
	int amount;  //�Աݾ�

	printf("�Ա��� ���¹�ȣ: ");
	scanf("%s", accountNumber);

	//�̹� ��ϵ� ���¹�ȣ�� ��
	for (int i = 0; i < idxOfAccounts; i++) {
		if (strcmp(accounts[i].ano, accountNumber) == 0) {
			printf("�Աݾ�: ");
			scanf("%d", &amount);
			if (amount < 0) {
				printf("�ùٸ� �ݾ��� �ƴմϴ�.\n");
				return; //��� ���� - for�� ��������
			}
			else {
				//�ܰ� = �ܰ� + �Աݾ�
				accounts[i].balance += amount;
				printf("���� ó�� �Ǿ����ϴ�. ���� �ܾ�: %d\n",
					accounts[i].balance);
				return;  //for�� Ż��
			}
		}
	}//for() �ݱ�

	printf("���¸� ã�� �� �����ϴ�.\n");
}

//���
void withdraw() {
	char accountNumber[ANO_LEN]; //�ܺ� �Է�(���� ��ȣ)
	int amount;  //��ݾ�

	printf("����� ���¹�ȣ: ");
	scanf("%s", accountNumber);

	//�̹� ��ϵ� ���¹�ȣ�� ��
	for (int i = 0; i < idxOfAccounts; i++) {
		if (strcmp(accounts[i].ano, accountNumber) == 0) {
			printf("��ݾ�: ");
			scanf("%d", &amount);
			if (amount < 0 || amount > accounts[i].balance) {
				printf("�ܾ��� �����ϰų� �ùٸ� �ݾ��� �ƴմϴ�. " 
							"���� �ܾ�: %d\n", accounts[i].balance);
				return; //��� ���� - for�� ��������
			}
			else {
				//�ܰ� = �ܰ� - ��ݾ�
				accounts[i].balance -= amount;
				printf("���� ó�� �Ǿ����ϴ�. ���� �ܾ�: %d\n",
					accounts[i].balance);
				return;  //for�� Ż��
			}
		}
	}//for() �ݱ�

	printf("���¸� ã�� �� �����ϴ�.\n");
}

int main()
{
	bool run = true; //����, ����
	int choice;  //�޴� ����
	
	while (run) {
		printf("====================================================\n");
		printf("1.���»��� | 2.���� | 3.��� | 4.���¸�� | 5.����\n");
		printf("====================================================\n");
		printf("����> ");
		scanf("%d", &choice); //��ȣ �Է�

		switch (choice) {
		case 1:
			createAccount();
			break;
		case 2:
			deposit();
			break; 
		case 3:
			withdraw();
			break;
		case 4:
			displayAccounts();
			break;
		case 5:
			printf("���α׷� ����!");
			run = false;  //���� ����
			break;
		default:
			printf("�߸��� �Է��Դϴ�. �ٽ� �����ϼ���\n");
			break;
		}
	}

	//system("pause");

	return 0;
}