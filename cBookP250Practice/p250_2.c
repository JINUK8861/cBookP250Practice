	//문2
/*
	main 함수가 다음과 같이 작성된 상태에서 세 변수에 저장된 값을 서로 바꾸는 함수 정의
	함수 호출은 swapNumbers 행과 같이 하고,
	호출 결과는 num1의 값을 num2에, num2의 값을 num3에, num3의 값을 num1에 저장
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

	printf("함수 호출 전 num1 num2 num3 : %d %d %d\n", num1, num2, num3);
	swapNumbers(&num1, &num2, &num3);
	printf("함수 호출 후 num1 num2 num3 : %d %d %d\n", num1, num2, num3);

	return 0;
}