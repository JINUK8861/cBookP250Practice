	//문3
/*
	main 함수가 다음과 같이 작성된 상태에서 1부터 n까지의 합을 구하여 반환하는
	재귀 호출 함수 recursiveSum을 정의
	인자로 정수 n을 전달받아 인자가 0이 될 때까지의 인자 값을 계속해서 더하는 방식으로 재귀 호출
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
	printf("n을 입력하세요 : ");
	scanf_s("%d", &n);
	int result = recursiveSum(n);
	printf("1부터 n까지의 합 : %d\n", result);
	return 0;
}