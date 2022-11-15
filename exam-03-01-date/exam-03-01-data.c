	/*
	 데이터 표현방식
		정수표현
			컴퓨터는 2진수로 표현(bit)
			부호비트(MSB) + 수치비트
			음의 값을 표현할 때 2의 보수로 표현

		실수표현
			지수부비트 + 기수부비트
		실수표현 수식
			±(1.m)*2^(e-127)
		부동소수점 오차
			정확한 실수표현 불가능 근사치 값으로 인해 생긴 오차
		 ! 검색하기 : 부동소수점 오차 예외 처리 방법

		unsigned 자료형

	
	*/
#include <stdio.h>
int main(void)
{

	float err_num = 0;
	for (int i = 0; i < 100; i++) // i가 +1이 되는데 99가 되기 전까지 시행 / 
	{
		err_num += 0.1;			// err_num = err_num + 0.1;
			}
	printf("%f", err_num);		// 10이 나와야 하는데 10.000002로 오차값이 나옴 // 부동소수점 오차를 처리하기 위해서는 소수점 어느정도 선에서 잘라내거나, 미리 선보고 해야함 / 주기적으로 오차 처리를 해야 함

	/*
	unsigned 자료형
		부호없는 데이터
		0이상 표현
		음수포기 대신 양수표현범위 커진다
	*/

	
	char cnum = 128; //l chart 형의 최대값은 127입니다.
	unsigned char u_cnum = 128; // unsigned는 음수값 없이 양수값만 표현한다고 생각하면 됨
	short snum = 32768; // short 형의 최대값은 32767입니다.
	unsigned short u_snum = 32768;

	printf("%d\n", cnum);
	printf("%d\n", u_cnum);
	printf("%d\n", snum);
	printf("%d\n", u_snum);



}