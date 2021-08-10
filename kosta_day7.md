#include <stdio.h>

//두 수의 위치를 바꿔주는 함수
void swap(double* a, double* b)
{
	double c;
	c = *a;
	*a = *b;
	*b = c;

}
//이름도 함께 바꿔주는 함수
void swap_c(char* a, char* b)
{
	char c;
	c = *a;
	*a = *b;
	*b = c;

}

//swaptest
int swaptest() {
	double arr[100];
	arr[1] = 50.0; arr[2] = 60.0;
	swap(&arr[1], &arr[2]);
	printf("%f    %f", arr[1], arr[2]);

	return 0;
}

//점수를 높은점수부터 정렬해주는 프로그램
int main()
{
	double  kor[7], eng[7], human[7];
	char name[7] = { 'a', 'b', 'c', 'd', 'e','f','g' };

	/*
	for (int x = 0; x < 7; x++) {
		printf("국어성적을 입력해주세요: ");
		scanf("%f", &kor[x]);
	}
	for (int y = 0; y < 7; y++) {
		printf("영어성적을 입력해주세요: ");
		scanf("%f", &eng[y]);
	}
	*/

	//국어, 영어점수 입력
	kor[0] = 89.0, kor[1] = 13.0, kor[2] = 71.0, kor[3] = 99.0, kor[4] = 78.0, kor[5] = 84.0, kor[6] = 71.0;
	eng[0] = 76.0, eng[1] = 11.0, eng[2] = 87.0, eng[3] = 73.0, eng[4] = 86.0, eng[5] = 43.0, eng[6] = 83.0;

	printf("original\n");
	printf("순위:   성명    국어       영어\n===========================================\n");
	for (int ori = 0; ori < 7; ori++) {
		printf("%4d:    % c % 10.2f % 10.2f \n", (ori + 1), name[ori], kor[ori], eng[ori]);
	}
	

	//각 점수에 가중치 해준 후 그 인원의 점수를 알아냄
	for (int i = 0; i < 7; i++)
	{
		kor[i] = 0.3 * kor[i];
		eng[i] = 0.7 * eng[i];
		human[i] = kor[i] + eng[i];
	}

	//높은점수부터 sorting(정렬) 해줌	
	for (int q = 0; q < 10; q++)
	{
		for (int k = 0; k < 7; k++)
		{
			if (human[k] > human[k + 1]) {
			}
			else if (human[k] < human[k + 1])
			{
				swap(&human[k], &human[k + 1]);
				swap(&kor[k], &kor[k + 1]);
				swap(&eng[k], &eng[k + 1]);
				swap_c(&name[k], &name[k + 1]);
			}
		}
	}
	//인원들의 sorting된 점수를 출력
	printf("\n\nsorted\n");
	printf("순위:   성명    국어       영어       합계\n===========================================\n");
	for (int j = 0; j < 7; j++) {

		printf("%4d:    %c %10.2f %10.2f %10.2f\n", (j + 1), name[j], kor[j], eng[j], human[j]);
	}




	return 0;
}
