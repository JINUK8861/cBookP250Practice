	//��2
/*
	main �Լ��� ������ ���� �ۼ��� ���¿��� �� ������ ����� ���� ���� �ٲٴ� �Լ� ����
	�Լ� ȣ���� swapNumbers ��� ���� �ϰ�,
	ȣ�� ����� num1�� ���� num2��, num2�� ���� num3��, num3�� ���� num1�� ����
*/
#include <stdio.h>

void swapNumbers(int* n1, int* n2, int* n3) {
	int temp;
	temp = *n3;
	*n3 = *n2;
	*n2 = *n1;
	*n1 = temp;
}

int main(void)
{
	int num1 = 5, num2 = 8, num3 = 10;

	printf("�Լ� ȣ�� �� num1 num2 num3 : %d %d %d\n", num1, num2, num3);
	swapNumbers(&num1, &num2, &num3);
	printf("�Լ� ȣ�� �� num1 num2 num3 : %d %d %d\n", num1, num2, num3);

	return 0;
}