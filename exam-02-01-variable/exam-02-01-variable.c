/*

 변수란?
   메모리 공간에 붙여진 이름.
   C 프로그램에서 사용되는 모든 값은 메모리 공간에 저장.
   메모리 공간에 이름을 붙여 접근 가능.

 변수 선언 및 초기화
   자료형 변수명 = 값

   변수명 규칙
	알파벳, 숫자, 언더바 로만 구성(o)
	숫자로 시작하면 안됨(x)
	공백을 포함해도 안됨(x)
	키워드 변수명(c언어에서 사용하고 있는 명령어나 void, int 이런거) 안됨(x)
	<주의> c언어는 알파벳 대/소문자 구분을 한다!!!!


*/

#include <stdio.h>

int main(void)
{
	int number1, number2; // 두 개 int형 변수를 한번에 선언
	number1 = 1;
	number2 = 2;

	int number3 = 3, number4 = 4; //선언과 초기화(변수에다가 값을 바로 대입을 시키는 것) 동시 진행

	number1 = 5;

	printf("%d\n", number1);
	printf("%d\n", number2);
	printf("%d\n", number3);
	printf("%d\n", number4); // \n 은 아래로 내려가게 하는거임(계행)


	/* 사용가능한 변수명들*/
	int num = 3;
	int number5 = 5;
	int num_num = 10;
	int Number = 15;

	/*사용 불가능한 변수명들(컴파일 에러 유발, 빨간줄 뜸)*/
	// int hello boy = 3;	// 공백 포함
	// int hi#$ = 5;		// 특수기호 사용
	// int 8number = 8;	// 숫자로 시작
	// int short = 3;		// 기능이 있는 키워드

}