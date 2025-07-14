
#include <stdio.h>
//5개의 정수를 배열에 입력받아 최소값 계산

int main()
{
	int arr[5];
	int idx = 0; //배열의 인덱스
	int min = 9999; //매우 큰 값으로 최소값 설정

	while (idx < 5) {
		printf("%d번째의 수 입력: ", idx + 1);
		scanf_s("%d", &arr[idx]);
		if (min > arr[idx])
			min = arr[idx];
		idx++; //다음 인덱스 증가
	}
	printf("최소값은 %d\n", min);

	return 0;
}