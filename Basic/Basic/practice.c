#include <stdio.h>


int main()
{
	//실습 1
	/*int bread, person, share, remainder;

	bread = 10;  //빵
	person = 3;  //사람

	share = bread / person;     //몫
	remainder = bread % person; //나머지

	printf("각자의 몫: %d\n", share);
	printf("남은 빵의 개수: %d\n", remainder);*/

	//실습 2
	int n1;
	double n2;

	n1 = 10;
	n2 = 2.0;

	printf("%d\n", (int)(n1 + n2));
	printf("%d\n", (int)(n1 - n2));
	printf("%d\n", (int)(n1 * n2));
	printf("%d\n", (int)(n1 / n2));

	return 0;
}