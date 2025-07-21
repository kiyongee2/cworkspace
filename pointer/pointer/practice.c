#include <stdio.h>

int main()
{
	//배열의 정적(고정) 할당
	char arr[] = {'1', 'B', 'C', 'D', 'E'};
	char* p;

	//p = &arr[0]; //p = arr;
	p = &arr[2];

	printf("%c%c", *p, *(p - 2)); //C1

	return 0;
}