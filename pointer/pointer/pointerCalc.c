#include <stdio.h>

int main()
{
	int x = 10, y = 20, z;
	int* arr[3];  //공간이 3개인 정수형 포인터 배열

	//배열에 주소 저장
	arr[0] = &x;
	arr[1] = &y;
	arr[2] = &z;

	//int* arr[3] = { &x, &y, &z }; //선언과 함께 초기화

	//덧셈
	*arr[2] = *arr[0] + *arr[1];

	printf("%d %d\n", *arr[2], z); //30 30

	return 0;
}