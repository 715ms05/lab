	/*
	���ͷ�(Literal)
		���� �� ��ü�� ������ ����� �ǹ�

		��)
		������ ��� : 10, -10
		�Ǽ��� ��� : 2.2, 3.14, -5.1
		������ ��� : 'A', 'B', 'C'

	��ũ�� ���
		�ɺ��� ��� ����
		�����Ͻ� ���� ���� ��ũ�� ��� ó��	

	�ɺ��� ���
		����� �̸��� �ٿ��ذ�
		�ʱⰪ �����ϸ� ���� �Ұ�
		���α׷� �帧�� ���� ������ ��
	
	*/

#include <stdio.h>
#define LENGTH 10

int main(void)
{
	int number = 3;		// ����
	const int NUMBER = 5; // ���

	printf("%d\n", number);
	printf("%d\n", NUMBER);
	printf("%d\n", LENGTH);
	// Alt + ����Ű ���̵�

	number = 2;


	printf("%d\n", number);
	printf("%d\n", LENGTH);
	




}