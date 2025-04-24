#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i = 10; //정수형 변수에 값 10저장
	double f = 12.3; //실수형 변수에 값 12.3저장
	int* pi = NULL; //포인터 변수(정수형 변수의 주소 기억) 선언
	// NULL은 주소가 없음을 의미	

	double* pf = NULL; //포인터 변수(실수형 변수의 주소 기억) 선언
	pi = &i; // i의 주소를 pi에 저장
	pf = &f; // f의 주소를 pf에 저장

	printf("%p %p \n", pi, pf); // pi와 pf의 주소 출력
	printf("%p %p \n", &pi, &pf); // pi와 pf의 주소 출력

	int k = 300;
	int y = 20;
	printf("%d\n", k); //300
	printf("%p\n", &k); //k의 주소
	//포인터 변수 선언 po(아무주소를 가리키면 안됨.)
	
	int* po = NULL; //NULL은 주소가 없음을 의미
	po = &y; //y의 주소를 po에 저장
	printf("%p\n", po); //y의 주소를 역참조하여 y의 값 출력
	printf("%d\n", *po); //y의 주소를 역참조하여 y의 값 출력

	



	return 0;
	
}