#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i = 10; //정수형 변수에 값 10저장
	char c = 69; //아스키코드 값 69는 문자 'E'에 해당
	float f = 12.3; //실수형 변수에 값 12.3저장
	printf("i의 값: %d\n", i); //변수 i의 주소 출력
	printf("c의 값: %c\n", c); //변수 c의 주소 출력
	printf("f의 값: %f\n", f); //변수 f의 주소 출력

	//
	printf("i의 주소: %p\n", &i); //변수 i의 주소 출력
	printf("c의 주소: %p\n", &c); //변수 c의 주소 출력
	printf("f의 주소: %p\n", &f); //변수 f의 주소 출력
	return 0;

}