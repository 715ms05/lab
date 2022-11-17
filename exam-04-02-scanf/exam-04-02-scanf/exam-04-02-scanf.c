/*


*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	/*char character;
	int inum;
	float fnum;

	scanf("%c", &character);
	scanf("%d", &inum);
	scanf("%f", &fnum);

	printf("%c, %d, %f, \n", character, inum, fnum);*/


	//주석 : Ctrl + Shift + /

	int num1, num2, num3;
	float fnum1, fnum2;

	//printf("세 개의 정수 입력 : ");
	//scanf("%d %d %d", &num1, &num2, &num3);
	//printf("입력된 정수들 : %d %d %d \n", num1, num2, num3);

	//printf("실수, 정수, 실수 차례대로 입력: ");
	//scanf("%f %d %f", &fnum1, &num1, &fnum2); // &num1 하면 값을 넣는게 아니라 주소값을 넣는것임
	//printf("입력된 값들 : %f %d %f \n", fnum1, num1, fnum2);

	printf("세 개의 정수 입력 : ");
	// 순서대로 8진수, 16진수, 10진수 입력
	scanf("%o %x %d", &num1, &num2, &num3);
	printf("입력된 정수들 : %d %d %d \n", num1, num2, num3);
}