#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <string.h> //strcmp()

#define MAX_ACCOUNTS 100 //최대 계좌수
#define ANO_LEN 20    //계좌번호 크기
#define OWNER_LEN 40  //계좌주 크기

//은행 계좌 구조체 정의
typedef struct {
	//멤버 변수 - 계좌번호, 계좌주, 잔고
	char ano[ANO_LEN];
	char owner[OWNER_LEN];
	int balance;
}BankAccount;

//전역 변수
BankAccount accounts[MAX_ACCOUNTS]; //계좌 배열 생성
int idxOfAccounts;  //배열의 인덱스

//계좌 생성
void createAccount() {
	char accountNumber[ANO_LEN]; //외부 입력(계좌 번호)

	if (idxOfAccounts >= MAX_ACCOUNTS) {
		printf("더 이상 계좌를 생성할 수 없습니다.");
		return;
	}

	printf("계좌 번호 입력(예: xxx-xxx-xxxx): ");
	scanf("%s", accountNumber);

	//계좌 중복 검사
	for (int i = 0; i < idxOfAccounts; i++) {
		if (strcmp(accounts[i].ano, accountNumber) == 0) {
			printf("이미 등록된 계좌입니다. 다시 입력하세요.\n");
			return;
		}
	}

	//중복이 없을때 계좌 생성
	strcpy(accounts[idxOfAccounts].ano, accountNumber);  //계좌번호 복사

	printf("계좌주 입력: ");
	scanf("%s", accounts[idxOfAccounts].owner);

	accounts[idxOfAccounts].balance = 0; //잔고 초기화
	printf("결과: 계좌가 생성되었습니다.(계좌번호: %s)\n",
		accounts[idxOfAccounts].ano);

	idxOfAccounts++;  //다음 인덱스로 1 증가
}

//계좌 목록
void displayAccounts() {
	printf("********** 계  좌  목  록  **********\n");

	if (idxOfAccounts == 0) {
		printf("등록된 계좌가 없습니다.\n");
		return;
	}
	
	for (int i = 0; i < idxOfAccounts; i++) {
		printf("계좌 번호: %s, 계좌주: %s, 잔고: %d\n",
			accounts[i].ano, accounts[i].owner, accounts[i].balance);
	}
}

//예금
void deposit() {
	char accountNumber[ANO_LEN]; //외부 입력(계좌 번호)
	int amount;  //입금액

	printf("입금할 계좌번호: ");
	scanf("%s", accountNumber);

	//이미 등록된 계좌번호와 비교
	for (int i = 0; i < idxOfAccounts; i++) {
		if (strcmp(accounts[i].ano, accountNumber) == 0) {
			printf("입금액: ");
			scanf("%d", &amount);
			if (amount < 0) {
				printf("올바른 금액이 아닙니다.\n");
				return; //즉시 종료 - for문 빠져나옴
			}
			else {
				//잔고 = 잔고 + 입금액
				accounts[i].balance += amount;
				printf("정상 처리 되었습니다. 현재 잔액: %d\n",
					accounts[i].balance);
				return;  //for문 탈출
			}
		}
	}//for() 닫기

	printf("계좌를 찾을 수 없습니다.\n");
}

//출금
void withdraw() {
	char accountNumber[ANO_LEN]; //외부 입력(계좌 번호)
	int amount;  //출금액

	printf("출금할 계좌번호: ");
	scanf("%s", accountNumber);

	//이미 등록된 계좌번호와 비교
	for (int i = 0; i < idxOfAccounts; i++) {
		if (strcmp(accounts[i].ano, accountNumber) == 0) {
			printf("출금액: ");
			scanf("%d", &amount);
			if (amount < 0 || amount > accounts[i].balance) {
				printf("잔액이 부족하거나 올바른 금액이 아닙니다. " 
							"현재 잔액: %d\n", accounts[i].balance);
				return; //즉시 종료 - for문 빠져나옴
			}
			else {
				//잔고 = 잔고 - 출금액
				accounts[i].balance -= amount;
				printf("정상 처리 되었습니다. 현재 잔액: %d\n",
					accounts[i].balance);
				return;  //for문 탈출
			}
		}
	}//for() 닫기

	printf("계좌를 찾을 수 없습니다.\n");
}

int main()
{
	bool run = true; //실행, 종료
	int choice;  //메뉴 선택
	
	while (run) {
		printf("====================================================\n");
		printf("1.계좌생성 | 2.예금 | 3.출금 | 4.계좌목록 | 5.종료\n");
		printf("====================================================\n");
		printf("선택> ");
		scanf("%d", &choice); //번호 입력

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
			printf("프로그램 종료!");
			run = false;  //실행 종료
			break;
		default:
			printf("잘못된 입력입니다. 다시 선택하세요\n");
			break;
		}
	}

	//system("pause");

	return 0;
}