	//��1
/*
	int�� ���� number1�� number2�� �����ϰ�, �� ���� ���ڸ� ���޹޴� �� ���� �Լ� ����
	�� �Լ��� �̸��� ����� ������ ����.
	- getDiffByValue : Call-by-value ������� �� ���� ���� ���Ͽ� ��ȯ�ϴ� �Լ�
	- callDiffByRef : Call-by-reference ������� �� �� �߿��� ū ���� number1��,
							���� ���� number2�� �����ϴ� �Լ�
	�� �Լ��� ������ �� main �Լ������� ���� ���� Ȯ��
*/


#include <stdio.h>

void getDiffByValue(int num1, int num2) {
	printf("%d - %d = %d\n", num1, num2, num1 - num2);
}

callDiffByRef(int* number1, int* number2) {
	int temp;
	if (*number1 < *number2) {
		temp = *number1;
		*number1 = *number2;
		*number2 = temp;
	}
}

int main(void) {
	int number1=1, number2=23;

	getDiffByValue(number1, number2);
	callDiffByRef(&number1, &number2);

	printf("C.B.R. ������� ������ �� ������ �� Ȯ�� : %d, %d", number1, number2);

	return 0;
}
