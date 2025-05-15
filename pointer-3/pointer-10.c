#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i = 777;
	call_value(i); //함수 호출
	printf("값 호출 : %d\n", i); //777

	call_refer(&i); //주소 호출 //i 주소
	printf("참조 호출 : %d\n", i); 
	return 0;
}

void call_value(int icopy)
{
	icopy = 888;
}

void call_refer(int* ip)
{
	*ip = 888;
}