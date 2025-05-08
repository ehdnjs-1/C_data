#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> // 스탠다드 입출력 헤더 파일

int main() // main 함수 시작
{
	int i = 10; // 정수형 변수 i 선언 및 초기화
	double f = 12.3; // 실수형 변수 f 선언 및 초기화
	int* pi = NULL; // 정수형 포인터 pi 선언 및 초기화

	double* pf = NULL; // 실수형 포인터 pf 선언 및 초기화
	pi = &i; // pi 포인터 변수에 i의 주소를 저장
	pf = &f; // pf 포인터 변수에 f의 주소를 저장
	
	
	printf("%p %p %d\n", pi, &i, i); // 
	printf("%p %p %.1f\n", pf, &f, f); // 
	return 0;
}