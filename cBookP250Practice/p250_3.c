	//��3
/*
	main �Լ��� ������ ���� �ۼ��� ���¿��� 1���� n������ ���� ���Ͽ� ��ȯ�ϴ�
	��� ȣ�� �Լ� recursiveSum�� ����
	���ڷ� ���� n�� ���޹޾� ���ڰ� 0�� �� �������� ���� ���� ����ؼ� ���ϴ� ������� ��� ȣ��
*/
#include <stdio.h>

int sum = 0;

int recursiveSum(int n)
{
	if (n == 0) {
		return sum;
	}
	sum += n;
	recursiveSum(n - 1);
}

int main(void)
{
	int n;
	printf("n�� �Է��ϼ��� : ");
	scanf_s("%d", &n);
	int result = recursiveSum(n);
	printf("1���� n������ �� : %d\n", result);
	return 0;
}