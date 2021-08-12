#include <stdio.h>



void SWAP(void* a, void* b, int op)
{
	if (op == 1)
	{
		char c;
		c = *(char*)a;
		*(char*)a = *(char*)b;
		*(char*)b = c;
	}
	else if (op == 4)
	{
		int c;
		c = *(int*)a;
		*(int*)a = *(int*)b;
		*(int*)b = c;
	}
	else if (op == 8)
	{
		double c;
		c = *(double*)a;
		*(double*)a = *(double*)b;
		*(double*)b = c;
	}



}

//두 점수의 위치를 바꿔주는 함수
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
//포인터 배열 위치 바꿔주는 것
void swap_c2(const char** a, const char** b)
{
	const char* c;
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


struct student
{
	double kor;
	double eng;
	const char* name; //{"길일","길이","길삼" ,"길사" ,"길오" ,"길육" ,"길칠" ,"길팔" ,"길구" ,"길열" };
	double total;
};
typedef struct student STU;

//GRADE_PROGRAM
//점수를 높은점수부터 정렬해주는 프로그램
int main()
{
	STU arr[10] = {
		{10.0,20.0,"길일",0.0},
		{20.0,30.0,"길이",0.0},
		{30.0,40.0,"길삼",0.0},
		{40.0,50.0,"길넷",0.0},
		{50.0,60.0,"길오",0.0},
		{60.0,70.0,"길육",0.0},
		{70.0,80.0,"길칠",0.0},
		{60.0,80.0,"길팔",0.0},
		{45.0,90.0,"길구",0.0},
		{72.0,39.0,"길열",0.0},
	};

	for (int oi = 0; oi < 10; oi++)
	{
		arr[oi].total = arr[oi].kor + arr[oi].eng;
	}

	printf("original\n");
	printf("순위:   성명    국어       영어       합계\n===========================================\n");
	for (int ori = 0; ori < 10; ori++) {
		printf("%4d:    %s  %10.2f  % 10.2f %10.2f\n", (ori + 1), arr[ori].name, arr[ori].kor, arr[ori].eng, arr[ori].total);
	}

	//각 점수에 가중치 해준 후 그 인원의 점수를 알아냄
	for (int i = 0; i < 10; i++)
	{
		arr[i].kor = 0.3 * arr[i].kor;
		arr[i].eng = 0.7 * arr[i].eng;
		arr[i].total = arr[i].kor + arr[i].eng;
	}

	for (int q = 0; q < 15; q++)
	{
		for (int k = 0; k < 10; k++)
		{
			if (arr[k].total > arr[k + 1].total) {
			}
			else if (arr[k].total < arr[k + 1].total)
			{
				swap(&arr[k].total, &arr[k + 1].total);
				swap(&arr[k].kor, &arr[k + 1].kor);
				swap(&arr[k].eng, &arr[k + 1].eng);
				swap_c2(&arr[k].name, &arr[k + 1].name);
			}
		}
	}

	printf("\n\nsorted\n");
	printf("순위:   성명    국어       영어       합계\n===========================================\n");
	for (int j = 0; j < 10; j++) {

		printf("%4d:    %s %10.2f %10.2f %10.2f\n", (j + 1), arr[j].name, arr[j].kor, arr[j].eng, arr[j].total);
	}


	return 0;
}