/*
	자료형 변환
		데이터 타입을 변경하는 것

		형변환시 데이터 소실 우려가 있다.
	*/

#include <stdio.h>

int main(void)
{
	double number1 = 10; // double은 실수형 자료임, 그런데 10(정수)을 넣음
	int number2 = 1.2345; // int는 정수형 자료임 / 그런데 1.2345(실수)를 넣음 / 그래서 받아들일 수 있는 정수(1)까지 넣었음
	short number3 = 70000; // short의 크기는 2바이트임 / 그런데 그 크기를 넘어갔으니까 값이 4464로 넘어가버림 

	printf("%f\n", number1); //%f는 실수형으로 표현하라는 문자임 -> 10을 실수로 표현하니까 10.0000으로 표현되는거임
	printf("%d\n", number2);
	printf("%d\n", number3);

	printf("%d\n", (short)3.1415); 
	printf("%d\n", (int)3.1415);
	printf("%f\n", (double)10); // 10 실수형으로 변해서 10.0000찍힘(형변환)
	printf("%f\n", (float)10);

	
}