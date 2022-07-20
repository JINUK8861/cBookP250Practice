	//문1
/*
	int형 변수 number1과 number2를 선언하고, 두 개의 인자를 전달받는 두 개의 함수 정의
	두 함수의 이름과 기능은 다음과 같다.
	- getDiffByValue : Call-by-value 방식으로 두 수의 차를 구하여 반환하는 함수
	- callDiffByRef : Call-by-reference 방식으로 두 수 중에서 큰 것을 number1에,
							작은 것을 number2에 저장하는 함수
	두 함수를 정의한 후 main 함수에서의 실행 여부 확인
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

	printf("C.B.R. 방식으로 변경한 두 변수의 값 확인 : %d, %d", number1, number2);

	return 0;
}
