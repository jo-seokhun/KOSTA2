#############KOSTA_DAY_2#############
#include <stdio.h> //std=standard, io=입출력, .h = 헤더
#include <conio.h> // con= 콘솔
int main()
{
	char name[20]; // 포인터라는 개념 --- 대괄호로 방을 잡아준다(데이터 공간 확보)
	int age = 10; //int = 변수의 type , age = 변수명, 10=변수값
	int height;
	
	printf("당신의 이름을 입력하세요:");
	scanf("%s", name); //방을 잡아주는 경우에는 &를 넣어주지않아두된다

	printf("키를 cm단위로 입력해주세요\n나이도 입력해주세요:");
	scanf("%d %d", &height, &age);   //scanf에는 변환자만 들어가야함 문자 들어가면 안돼 --- &를 붙이는건 방번호를 알려주는것이다
	
	sdf

	printf("안녕하세요.\n%s씨 반갑습니다.\n", name); // printf()=화면출력함수 --- \n=line feed 줄바꿈 문자 --- \r=cr=carrage return=출력위치를 제일 앞으로 가져가라 %s 변환자는 문자열
	 
	printf("저는 %5d 살이에여\n키는 %5.2f m에요", age,(float)(height)/100.0); //%d 변환자는 10진 정수 --- 숫자가 d 앞에있으면 그 수만큼 찍힐 총 자리수
	


	getch(); // getch() = 1문자 입력함수
	
	
}

/*서식문자 list
%d 부호있는 10진정수 1 2 3
%f 부호있는 10진 실수 1.2 2.4
%c 단일문자 'a' 'b' 'c' '1'
%s 문자열 "abc" "jo"
%x 부호없는 16진정수 
*/

