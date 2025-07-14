#include <stdio.h>
/*
    배열의 연산
	- 요소의 개수, 합계, 평균, 최대, 최소값
	- 최대값 알고리즘
	  1. 최대값 설정 - 배열의 첫번째값
	  2. 최대값 다음 요소 비교후 최대값 저장(반복)
*/
int main()
{
	//성적 관리 - 학생 1명의 5 과목의 성적
	int score[5] = {85, 75, 90, 74, 80};
	int i;
	int sum = 0;   //합계
	float average; //평균
	int maxVal;    //최대값

	//배열의 크기 - 요소의 수
	int size = sizeof(score) / sizeof(score[0]);
	printf("%d\n", sizeof(score)); //20byte(int형 4byte)
	printf("%d\n", size); //5

	maxVal = score[0]; //최대값 설정

	for (i = 0; i < size; i++) {
		sum += score[i]; //sum = sum + score[i];
		if (maxVal < score[i]) {
			maxVal = score[i];
		}
	}
	/*
	    sum = sum + score[0] = 0 + 85
	    sum = sum + score[1] = 85 + 75
	    sum = sum + score[2] = 85 + 75 + 90
	    sum = sum + score[3] = 85 + 75 + 90 + 75
	    sum = sum + score[4] = 85 + 75 + 90 + 75 + 80
	
	*/
	//평균
	average = (float)sum / size;

	printf("합계: %d\n", sum);
	printf("평균: %.1f\n", average);
	printf("최대값: %d", maxVal);

	return 0;
}